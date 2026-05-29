#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    for (int row_idx = 0; row_idx < 4; row_idx++) {
        for (int col_idx = 0; col_idx < 4; col_idx++) {
            int tmp_int;
            cin >> tmp_int;
            if (tmp_int % 5 == 0) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}