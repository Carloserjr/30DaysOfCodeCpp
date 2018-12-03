#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<iterator>
#include <sstream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    cin.ignore();

    map<string, string> phoneBook;
    for (int i = 0; i < n; i++) {
        string sentence;
        getline(cin, sentence);

        istringstream iss(sentence);
        vector<string> tokens{istream_iterator<string>{iss},
                              istream_iterator<string>{}};

        phoneBook[tokens.at(0)] = tokens.at(1);
    }

    string name;
    while(cin >> name) {
        if (phoneBook.find(name) != phoneBook.end()) {
            cout << name << "=" << phoneBook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }


    return 0;
}