// Exercise 2-5
#include <iostream>
#include <string>

using std::cout;        using std::endl;
using std::cin;         using std::string;

int main() {
    // Square
    cout << "Square: " << endl;

    const int squareSize = 50;

    for(int r = 0; r != squareSize / 2.5; ++r) {
        if(r == 0 || r == squareSize / 2.5 - 1) {
            string astrisks(squareSize, '*');
            cout << astrisks;
        } else {
            string spaces(squareSize - 2, ' ');
            cout << "*" << spaces << "*";
        }

        cout << endl;
    }

    // Rectangle
    cout << "Rectangle: " << endl;

    const int rectLength = 80;
    const int rectWidth = 20;

    for(int r = 0; r != rectWidth; ++r) {
        if(r == 0 || r == rectWidth - 1) {
            string astrisks(rectLength, '*');
            cout << astrisks;
        } else {
            string spaces(rectLength - 2, ' ');
            cout << "*" << spaces << "*";
        }

        cout << endl;
    }
    
    // Triangle
    cout << "Triangle: " << endl;

    const int triHeight = 30;

    for(int r = 0; r != triHeight; ++r) {
        string spaces(r, ' ');
        if(r == 0 || r == triHeight - 1) {
            string astrisks(spaces.size() + 1, '*');
            cout << astrisks;
        } else {
            cout << "*" << spaces << "*";
        }

        cout << endl;
    }

    return 0;
}
