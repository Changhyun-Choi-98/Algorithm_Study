#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    cout << b << " ";
    for (int i = 1; i <= (b - a); i++) {
        cout << b - i << " ";
    }
    return 0;
}