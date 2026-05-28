#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num_row, num_col;
    cin >> num_row >> num_col;
    for (int cur_row = 0; cur_row < num_row; cur_row++) {
        for (int cur_col = 0; cur_col < num_col; cur_col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}