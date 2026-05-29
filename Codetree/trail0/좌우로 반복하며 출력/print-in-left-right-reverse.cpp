#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int row_idx = 0; row_idx < n; row_idx++) {
        if (row_idx % 2 == 0) {
            for (int col_idx = 1; col_idx <= n; col_idx++) {
                cout << col_idx;
            }
        }
        else {
            for (int col_idx = n; col_idx > 0; col_idx--) {
                cout << col_idx;
            }
        }
        cout << endl;
    }
    return 0;
}