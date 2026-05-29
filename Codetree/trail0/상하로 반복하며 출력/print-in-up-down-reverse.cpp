#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int grid_size;
    cin >> grid_size;

    int arr[grid_size][grid_size];

    int row_idx = 0;
    int col_idx = 0;
    int tmp = 1;
    for (int i; i < grid_size * grid_size; i++) {
        arr[row_idx][col_idx] = tmp;
        if (col_idx % 2 == 0) {
            if (row_idx == (grid_size - 1)) {
                col_idx++;
                tmp = 1;
            }
            else {
                row_idx++;
                tmp++;
            }
        }
        else {
            if (row_idx == 0) {
                col_idx++;
                tmp = 1;
            }
            else {
                row_idx--;
                tmp++;
            }
        }
    }

    for (int row_idx = 0; row_idx < grid_size; row_idx++) {
        for (int col_idx = 0; col_idx < grid_size; col_idx++) {
            cout << arr[row_idx][col_idx];
        }
        cout << endl;
    }

    return 0;
}