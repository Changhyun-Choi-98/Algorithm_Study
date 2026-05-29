#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4];
    for (int row_idx = 0; row_idx < 4; row_idx++) {
        for (int col_idx = 0; col_idx < 4; col_idx++) {
            cin >> arr[row_idx][col_idx];
        }
    }
    for (int row_idx = 0; row_idx < 4; row_idx++) {
        int row_sum = 0;
        for (int col_idx = 0; col_idx < 4; col_idx++) {
            row_sum += arr[row_idx][col_idx];
        }
        cout << row_sum << endl;
    }
    return 0;
}