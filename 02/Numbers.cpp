#include <iostream>

using std::cout;            using std::endl;
using std::cin;

int main() {
    // Exercise 2-7
    for(int i = 10; i >= -5; --i) {
        cout << i << "  ";
    }

    cout << endl;

    // Exercise 2-8
    int product = 1;
    for(int i = 1; i != 10; ++i) {
        product *= i;
    }

    cout << product << endl;

    // Exercise 2-9
    cout << "Please enter two integers. ";

    int num1, num2;
    cin >> num1 >> num2;

    if(num1 > num2) {
        cout << "The first number, " << num1 << ", was larger.";
    } else if(num1 < num2) {
        cout << "The second number, " << num2 << ", was larger.";
    } else {
        cout << "Both numbers are of the same value.";
    }

    cout << endl;

    return 0;
}
