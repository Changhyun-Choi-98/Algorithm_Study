#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num_row, num_col;
    cin >> num_row >> num_col;
    int arr_1[num_row][num_col];
    for (int row_idx = 0; row_idx < num_row; row_idx++) {
        for (int col_idx = 0; col_idx < num_col; col_idx++) {
            cin >> arr_1[row_idx][col_idx];
        }
    }

    int arr_2[num_row][num_col];
    for (int row_idx = 0; row_idx < num_row; row_idx++) {
        for (int col_idx = 0; col_idx < num_col; col_idx++) {
            cin >> arr_2[row_idx][col_idx];
        }
    }

    for (int row_idx = 0; row_idx < num_row; row_idx++) {
        for (int col_idx = 0; col_idx < num_col; col_idx++) {
            cout << (int)(arr_1[row_idx][col_idx] != arr_2[row_idx][col_idx]) << " ";
        }
        cout << endl;
    }

    return 0;
}