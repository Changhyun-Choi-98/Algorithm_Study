from typing import List, Tuple

class Box:
    def __init__(self, num: int, h: int, w: int, r: int, c: int):
        self.num = num
        self.h, self.w = h, w   # 높이, 너비
        self.r, self.c = r, c   # 좌상단 좌표 (0-index)
        self.removed = False

# 하향/좌/우(왼쪽 턴/오른쪽 턴) 방향 벡터
DXYS = [(1, 0), (0, -1), (0, 1)]  # down, left, right

def in_range(N: int, r: int, c: int) -> bool:
    return 0 <= r < N and 0 <= c < N

def can_put(A: List[List[int]], N: int, h: int, w: int, r: int, c: int, d: int) -> bool:
    """
    직사각형이 방향 d로 '한 칸' 이동했을 때 새로 점유하는 선두 면만 검사.
    d=0(아래): 새 바닥 행 r + h - 1
    d=1(왼쪽): 새 왼쪽 열 c
    d=2(오른쪽): 새 오른쪽 열 c + w - 1
    """
    r1, r2, c1, c2 = r, r + h - 1, c, c + w - 1
    if d == 0:      # down: 새로 밟는 바닥 행만 검사
        r1 = r + h - 1
    elif d == 1:    # left: 새로 들어가는 왼쪽 열만 검사
        c2 = c
    else:           # right: 새로 들어가는 오른쪽 열만 검사
        c1 = c + w - 1

    for i in range(r1, r2 + 1):
        for j in range(c1, c2 + 1):
            if not in_range(N, i, j) or A[i][j] != 0:
                return False
    return True

def move(A: List[List[int]], N: int, h: int, w: int, r: int, c: int, d: int) -> Tuple[int, int]:
    """
    직사각형을 방향 d로 '끝까지' 이동. 매 스텝마다 leading edge만 검사.
    불가능해지는 직전 위치를 반환.
    """
    res_r, res_c = r, c
    dr, dc = DXYS[d]
    while True:
        nr, nc = r + dr, c + dc
        if can_put(A, N, h, w, nr, nc, d):
            res_r, res_c = nr, nc
            r, c = nr, nc
        else:
            break
    return res_r, res_c

def remove_box(A: List[List[int]], box: Box) -> None:
    """격자에서 박스를 지움(‘비우기’)."""
    box.removed = True
    for i in range(box.r, box.r + box.h):
        for j in range(box.c, box.c + box.w):
            A[i][j] = 0

def put_box(A: List[List[int]], box: Box) -> None:
    """격자에 박스를 채움(‘배치’)."""
    box.removed = False
    for i in range(box.r, box.r + box.h):
        for j in range(box.c, box.c + box.w):
            A[i][j] = box.num

# --- 입력 및 초기 적재 ---
N, M = map(int, input().split())
A = [[0] * N for _ in range(N)]
boxes: List[Box] = []

for _ in range(M):
    k, h, w, c1 = map(int, input().split())
    c0 = c1 - 1  # 0-index 변환
    # 맨 위 행(r=0)에서 시작하여 아래로 끝까지 낙하
    r, c = move(A, N, h, w, 0, c0, 0)
    b = Box(k, h, w, r, c)
    boxes.append(b)
    put_box(A, b)

# 택배 번호 오름차순으로 후보 탐색을 하므로 정렬
boxes.sort(key=lambda x: x.num)

# --- 시뮬레이션: 좌/우 턴을 번갈아가며 모두 빠질 때까지 ---
for turn in range(M):
    is_left_turn = (turn % 2 == 0)

    # 1) 하차 가능한 후보 찾기 (해당 방향, k 오름차순)
    for box in boxes:
        if box.removed:
            continue

        # 후보 박스를 잠시 지운 뒤, 해당 방향으로 끝까지 밀어보기
        remove_box(A, box)
        rr, cc = move(A, N, box.h, box.w, box.r, box.c, 1 if is_left_turn else 2)

        # 경계에 닿았으면 바로 격자 밖으로 뺄 수 있음 → 하차 확정
        can_exit = (cc == 0) if is_left_turn else (cc + box.w == N)
        if can_exit:
            # 완전 제거: 위치 정보는 남겨도 되지만, 격자에는 이미 비워둔 상태
            print(box.num)
            # 박스는 removed=True 상태로 남겨둠
            break
        else:
            # 못 빼면 원위치로 되돌림
            put_box(A, box)

    # 2) 중력 정리: 남은 박스들을 '바닥이 더 아래인 순서'로 낙하
    boxes.sort(key=lambda x: -(x.r + x.h))  # bottom index 내림차순
    for box in boxes:
        if box.removed:
            continue
        remove_box(A, box)
        nr, nc = move(A, N, box.h, box.w, box.r, box.c, 0)  # down
        box.r, box.c = nr, nc
        put_box(A, box)

    # 다음 턴을 위해 다시 k 오름차순
    boxes.sort(key=lambda x: x.num)
