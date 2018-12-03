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

int main(){
    int n;
    cin >> n;
    int div, sequence, mod, max1InSequence, previous = -1;
    sequence = max1InSequence = 0;
    div = n;

    do {
        mod = div%2;

        if (previous == -1){
            previous = mod;
        }

        if (mod == 1) {
            sequence++;
        }

        div /= 2;

        if((mod != 1 && previous == 1) || div <= 0){
            if(sequence > max1InSequence) {
                max1InSequence = sequence;
            }
            sequence = 0;
        }

        previous = mod;
    } while(div > 0);

    cout << max1InSequence << endl;
    return 0;
}
