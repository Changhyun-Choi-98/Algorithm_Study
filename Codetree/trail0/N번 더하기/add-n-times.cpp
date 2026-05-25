#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, n;
    cin >> a >> n;
    int i;
    for (i = 0; i < n; i++) {
        a += n;
        cout << a << endl;
    }
    return 0;
}