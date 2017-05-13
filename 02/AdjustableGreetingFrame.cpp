// Exercise 2-0
#include <iostream>
#include <string>

using std::cout;            using std::endl;    
using std::cin;             using std::string;

int main() {
    cout << "Please enter your name: ";

    string name;
    cin >> name;
    
    // Exercise 2-2 and 2-3
    cout << "Please enter your desired row padding amount: ";

    int temp;
    cin >> temp;
    const int pad = temp;

    if(pad < 0) {
        cout << "You must enter a value greater than or equal to zero. "
                "Please try again." << endl;;
        return 1;
    }

    cout << "Please enter your desired column padding amount: ";

    cin >> temp;
    const int sidePad = temp;

    if(sidePad < 0) {
        cout << "You must enter a value greater than or equal to zero. "
                "Please try again." << endl;
        return -1;
    }

    const string sidePadSpaces(sidePad, ' ');
    const string greeting = sidePadSpaces + "Hello, " + name + "!" + sidePadSpaces;

    const int rows = (pad * 2) + 3;
    const string::size_type cols = greeting.size() + 2;
    const string spaces(greeting.size(), ' ');

    cout << endl;

    for(int r = 0; r != rows; r++) {
        string::size_type c = 0;
        while(c != cols) {
            if(r == pad + 1 && c == 1) {
                cout << greeting;
                c += greeting.size();
            } else {
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                    ++c;
                } else {
                    // Exercise 2-4
                    cout << spaces;
                    c += spaces.size();
                }
            }
        }

        cout << endl;
    }

    return 0;
}
