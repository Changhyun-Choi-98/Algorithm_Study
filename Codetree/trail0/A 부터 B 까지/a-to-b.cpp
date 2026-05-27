#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int cur = a;
    cout << cur << " ";
    while (true) {
        if (cur % 2 == 1) {
            cur *= 2;
        }
        else {
            cur += 3;
        }
        if (cur > b) {
            break;
        }
        cout << cur << " ";
    }
    return 0;
}