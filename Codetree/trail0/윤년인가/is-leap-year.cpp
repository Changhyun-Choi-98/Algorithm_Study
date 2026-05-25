#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int y;
    cin >> y;

    bool divided_4 = (y % 4 == 0);
    bool divided_100 = (y % 100 == 0);
    bool divided_400 = (y % 400 == 0);

    if (divided_4) {
        if (divided_100 && (!divided_400)) {
            cout << "false";
        }
        else {
            cout << "true";
        }
    }
    else {
        cout << "false";
    }

    return 0;
}