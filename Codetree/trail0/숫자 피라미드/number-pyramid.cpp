#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int max_num;
    cin >> max_num;
    for (int cur_num = 1; cur_num <= max_num; cur_num++) {
        for (int idx = 0; idx < cur_num; idx++) {
            cout << cur_num << " ";
        }
        cout << endl;
    }
    return 0;
}