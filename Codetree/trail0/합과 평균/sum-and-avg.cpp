#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);
    
    int a, b;
    cin >> a >> b;
    cout << a + b << " " << ((double)a + b) / 2;
    return 0;
}