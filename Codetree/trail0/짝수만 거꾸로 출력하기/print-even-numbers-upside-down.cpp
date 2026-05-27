#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int total_len;
    cin >> total_len;
    int int_arr[total_len];
    for (int i = 0; i < total_len; i++) {
        cin >> int_arr[i];
    }
    
    for (int i = total_len - 1; i >= 0; i--) {
        if (int_arr[i] % 2 == 0) {
            cout << int_arr[i] << " ";
        }
    }
    return 0;
}