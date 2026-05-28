#include <iostream>
using namespace std;

bool func(int test_int) {
    int cnt = 0;
    for (int i = 2; i < test_int; i++) {
        if (test_int % i == 0) {
            cnt += 1;
            if (cnt >= 2) {
                return false;
            }
        }
    }
    return (cnt == 1);

}

int main() {
    // Please write your code here.
    int start, end;
    cin >> start >> end;

    int result = 0;

    for (int test_int = start; test_int <= end; test_int++) {
        if (func(test_int)) {
            result++;
        }
    }

    cout << result;

    return 0;
}