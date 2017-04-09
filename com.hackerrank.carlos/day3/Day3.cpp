#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
 * Objective
 * In this challenge, we're getting started with conditional statements. Check out the Tutorial tab for learning
 * materials and an instructional video!
 *
 * Task
 * Given an integer, 'n', perform the following conditional actions:
 * - If 'n' is odd, print Weird
 * - If 'n' is even and in the inclusive range of 2 to 5, print Not Weird
 * - If 'n' is even and in the inclusive range of 6 to 20, print Weird
 * - If 'n' is even and greater than 20, print Not Weird
 *
 * Complete the stub code provided in your editor to print whether or not 'n' is weird.
 *
 * Input Format
 * A single line containing a positive integer, 'n'.
 *
 * Constraints
 * - 1 <= 'n' <= 100
 *
 * Output Format
 * Print Weird if the number is weird; otherwise, print Not Weird.
 *
 * Sample Input 0
 * 3
 *
 * Sample Output 0
 * Weird
 *
 * Sample Input 1
 * 24
 *
 * Sample Output 1
 * Not Weird
 *
 * Explanation
 *
 * Sample Case 0: n = 3
 * 'n' is odd and odd numbers are weird, so we print Weird.
 *
 * Sample Case 1:
 * 'n' > 20 and 'n' is even, so it isn't weird. Thus, we print Not Weird.
 */
int main(){
    int N;
    cin >> N;

    string sayWeird = "Weird";
    string sayNotWeird = "Not Weird";

    if (N % 2 == 0) {
        if (N > 20){
            cout << sayNotWeird << endl;
        } else if (N > 6) {
            cout << sayWeird << endl;
        } else {
            cout << sayNotWeird << endl;
        }
    } else {
        cout << sayWeird << endl;
    }

    return 0;
}
