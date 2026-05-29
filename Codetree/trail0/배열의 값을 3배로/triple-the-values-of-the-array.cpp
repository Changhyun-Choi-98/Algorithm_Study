#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[3][3];
    for (int row_idx = 0; row_idx < 3; row_idx++) {
        for (int col_idx = 0; col_idx < 3; col_idx++) {
            cin >> arr[row_idx][col_idx];
        }
    }
    for (int row_idx = 0; row_idx < 3; row_idx++) {
        for (int col_idx = 0; col_idx < 3; col_idx++) {
            cout << 3 * arr[row_idx][col_idx] << " ";
        }
        cout << endl;
    }    
    return 0;
}