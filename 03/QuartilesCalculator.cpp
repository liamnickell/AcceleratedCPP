// Exercise 3-2
#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;            using std::cin;
using std::endl;            using std::vector;
using std::sort;

int main() {
    cout << "Please enter a set of integers: ";

    vector<int> nums;
    int input;
    while(cin >> input) {
        nums.push_back(input);
    }

    sort(nums.rbegin(), nums.rend());

    for(int i = 0; i < nums.size(); ++i) {
        if(i == 0) {
            cout << "First Quartile: ";
        } else if(i == nums.size() / 4) {
            cout << endl;
            cout << "Second Quartile: ";
        } else if(i == nums.size() / 2) {
            cout << endl;
            cout << "Third Quartile: ";
        } else if(i == nums.size() * 3 / 4) {
            cout << endl;
            cout << "Fourth Quartile: ";
        }

        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}
