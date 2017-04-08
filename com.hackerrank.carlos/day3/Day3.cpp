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
