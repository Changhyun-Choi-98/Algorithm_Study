#include <iostream>
using namespace std;

int func(int a, int b) {
    int cum_sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cum_sum += i;
        }
    }
    return cum_sum;
}

int main() {
    // Please write your code here.
    int total_num;
    cin >> total_num;
    int a, b;
    for (int i = 0; i < total_num; i++) {
        cin >> a >> b;
        cout << func(a, b) << endl;
    }
    return 0;
}