#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_math, a_eng, b_math, b_eng;
    cin >> a_math >> a_eng;
    cin >> b_math >> b_eng;
    cout << ((a_math > b_math) && (a_eng > b_eng));
    
    return 0;
}