#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);

    double feet2cm = 30.48;
    double mile2cm = 160934;

    double cur_feet = 9.2;
    double cur_mile = 1.3;

    cout << cur_feet << "ft = " << cur_feet * feet2cm << "cm" << endl;
    cout << cur_mile << "mi = " << cur_mile * mile2cm << "cm";

    return 0;
}