#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num_row;
    cin >> num_row;
    int cur_int = 1;
    for (int cur_row = 0; cur_row < num_row; cur_row++) {
        for (int idx = 0; idx < cur_row + 1; idx++) {
            cout << cur_int << " ";
            cur_int++;
        }
        cout << endl;
    }
    return 0;
}