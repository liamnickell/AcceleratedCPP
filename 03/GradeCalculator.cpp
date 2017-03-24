// Exercise 3-0
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;             using std::setprecision;
using std::cout;            using std::string;
using std::endl;            using std::streamsize;
using std::vector;          using std::sort;

int main() {
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!"  << endl;
    
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter all your homework grades, followed by end-of-file: ";

    vector<double> homework;
    double hw;
    while(cin >> hw) {
        homework.push_back(hw);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if(size == 0) {
        cout << "You must enter your grades. Please try again." << endl;
        return 1;
    }

    sort(homework.begin(), homework.end());

    vec_sz mid = size / 2;
    double median;
    median = (mid % 2 == 0) ? (homework[mid] + homework[mid-1]) / 2
                            : homework[mid];

    streamsize prec = cout.precision();
    cout << "Your final grade is: " << setprecision(3) 
         << (0.4 * final) + (0.2 * midterm) + (0.4 * median)
         << setprecision(prec) << endl;

    return 0;
}
