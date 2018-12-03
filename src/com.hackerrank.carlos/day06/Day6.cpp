#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "string"

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    cin.ignore();

    vector<string> results;

    for (int i = 0; i < T; i++) {
        string S;
        getline(cin, S);
        string evens = "";
        string odds = "";

        for (int j = 0; j < S.size(); ++j) {
            if (j & 1){
                odds += S[j];
            } else {
                evens += S[j];
            }
        }

        results.push_back(evens + " " + odds);
    }

    for(string text: results){
        cout << text << endl;
    }

    return 0;
}
