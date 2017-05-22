// Exercise 3-5
#include <iostream>
#include <string>
#include <vector>

using std::cout;            using std::cin;
using std::endl;            using std::string;
using std::vector;

int main() {
    vector<string> students;
    vector<int> grades;

    cout << "Enter a student name, their midterm and final exam grades, "
            "and their homework grades (there must be 5 homework grades): ";

    bool receivingInput = true;
    while(receivingInput) {
        string student;
        cin >> student;

        students.push_back(student);

        double midterm, final;
        cin >> midterm >> final;

        double hw; 
        double sum = 0;
        int count = 0;

        for(int i = 0; i < 5; ++i) {
            cin >> hw;
            sum += hw;
            ++count;
        }


        hw = sum / count;
        double grade = (midterm * 0.2) + (final * 0.4) + (hw * 0.4);
        grades.push_back(grade);

        cout << "Do you have more students to add (y/n)? ";

        string response;
        cin >> response;

        if(response == "y" || response == "yes") {
            cout << "Okay, please enter the next student's info in the same "
                    "manner (followed by end-of-file): ";
        } else if(response == "n" || response == "no") {
            cout << "Okay, exiting input..." << endl << endl;
            receivingInput = false;
        } else {
            cout << "You must enter valid input. Exiting anyway..."
                 << endl << endl;
            return 1;
        }
    }

    cout << "Students and their Grades" << endl;
    cout << "-------------------------" << endl;
    for(int i = 0; i < students.size(); ++i) {
        cout << students[i] << ": " << grades[i] << endl;
    }

    return 0;
}
