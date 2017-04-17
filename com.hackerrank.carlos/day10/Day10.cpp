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
#include <unordered_map>

using namespace std;

/**
 * Objective
 * Today, we're working with binary numbers. Check out the Tutorial tab for learning materials and an instructional
 * video!
 *
 * Task
 * Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer denoting the
 * maximum number of consecutive 1's in n's binary representation.
 *
 * Input Format
 * A single integer, n.
 *
 * Constraints
 *  1 <= n <= 10^6
 *
 *  Output Format
 *  Print a single base-10 integer denoting the maximum number of consecutive 1's in the binary representation of n.
 *
 * Sample Input 1
 * 5
 *
 * Sample Output 1
 * 1
 *
 * Sample Input 2
 * 13
 *
 * Sample Output 2
 * 2
 *
 * Explanation
 * Sample Case 1:
 * The binary representation of 5 is 101, so the maximum number of consecutive 1's is 1.
 *
 * Sample Case 2:
 * The binary representation of 13 is 1101, so the maximum number of consecutive 1's is 2.
 */
int main(){
    int n;
    cin >> n;
    int div, sequence, rest, max1InSequence, previous = -1;
    sequence = max1InSequence = rest = 0;
    div = n;

    do {
        rest = div%2;

        if (previous == -1){
            previous = rest;
        }

        if (rest == 1) {
            sequence++;
        }

        div = div/2;

        if((rest != 1 && previous == 1) || div <= 0){
            if(sequence > max1InSequence) {
                max1InSequence = sequence;
            }
            sequence = 0;
        }

        previous = rest;
    } while(div > 0);

    cout << max1InSequence << endl;
    return 0;
}
