#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while (true) {
        int tmp;
        cin >> tmp;
        if (tmp < 25) {
            cout << "Higher" << endl;
        }
        else if (tmp > 25) {
            cout << "Lower" << endl;
        }
        else {
            cout << "Good";
            break;
        }
    }
    return 0;
}