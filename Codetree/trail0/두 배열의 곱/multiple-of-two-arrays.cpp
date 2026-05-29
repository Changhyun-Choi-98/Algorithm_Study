#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr_1[3][3];
    for (int row_idx = 0; row_idx < 3; row_idx++) {
        for (int col_idx = 0; col_idx < 3; col_idx++) {
            cin >> arr_1[row_idx][col_idx];
        }
    }
    int arr_2[3][3];
    for (int row_idx = 0; row_idx < 3; row_idx++) {
        for (int col_idx = 0; col_idx < 3; col_idx++) {
            cin >> arr_2[row_idx][col_idx];
        }
    }
    for (int row_idx = 0; row_idx < 3; row_idx++) {
        for (int col_idx = 0; col_idx < 3; col_idx++) {
            cout << arr_1[row_idx][col_idx] * arr_2[row_idx][col_idx] << " ";
        }
        cout << endl;
    }    
    return 0;
}