// Exercise 3-3
#include <iostream>
#include <string>
#include <vector>

using std::cout;            using std::cin;
using std::endl;            using std::string;
using std::vector;

int main() {
    cout << "Give me an input, followed by end-of-file, and I will count "
            "the occurances of each distinct word: ";

    vector<string> words;
    vector<int> occurances;
    string word;

    while(cin >> word) {
        bool found = false;
        for(int i = 0; i < words.size(); ++i) {
            if(words[i] == word) {
                found = true;
                ++occurances[i];
            }
        }

        if(!found) {
            words.push_back(word);
            occurances.push_back(1);
        }
    }

    cout << "Occurances:" << endl;
    for(int i = 0; i < words.size(); ++i) {
        cout << words[i] << ": " << occurances[i] << endl;
    }

    return 0;
}
