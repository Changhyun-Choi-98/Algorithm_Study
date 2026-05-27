#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cum_sum = 0;
    for (int i = 1; i <= 100; i++) {
        cum_sum += i;
        if (cum_sum >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}