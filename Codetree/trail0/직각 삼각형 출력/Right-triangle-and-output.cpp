#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num_row;
    cin >> num_row;
    for (int cur_row = 0; cur_row < num_row; cur_row++) {
        for (int star_idx = 0; star_idx < 2 * cur_row + 1; star_idx++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}