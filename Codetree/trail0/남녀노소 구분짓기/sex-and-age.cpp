#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender;
    int age;
    cin >> gender >> age;

    bool is_old = (age >= 19);
    bool is_xx = gender;

    if (is_old) {
        if (is_xx) {
            cout << "WOMAN";
        }
        else {
            cout << "MAN";
        }
    }
    else {
        if (is_xx) {
            cout << "GIRL";
        }
        else {
            cout << "BOY";
        }
    }

    return 0;
}