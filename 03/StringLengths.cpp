// Exercise 3-4
#include <iostream>
#include <string>

using std::cout;            using std::cin;
using std::endl;            using std::string;

int main() {
    cout << "Enter some input, followed by end-of-file, and I'll return "
            "the length of the longest and shortest strings in the input: ";

    typedef string::size_type str_size;
    str_size longest;
    str_size shortest;

    bool firstWord = true;
    string word;

    while(cin >> word) {
        str_size size = word.size();

        if(firstWord) {
            longest = size;
            shortest = size;
            firstWord = false;
        }

        if(size > longest) {
            longest = size;
        } else if(size < shortest) {
            shortest = size;
        }
    }

    cout << "The longest word had a length of " << longest << " and the "
            "shortest word had a length of " << shortest << "." << endl;

    return 0;
}
