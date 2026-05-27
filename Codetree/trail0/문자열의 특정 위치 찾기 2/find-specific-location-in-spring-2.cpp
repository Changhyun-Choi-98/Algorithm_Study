#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str_arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char test_chr;
    cin >> test_chr;
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        string cur_str = str_arr[i];
        if ((cur_str[2] == test_chr) || (cur_str[3] == test_chr)) {
            cout << cur_str << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}