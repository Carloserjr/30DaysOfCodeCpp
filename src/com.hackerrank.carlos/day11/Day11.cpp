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

int sumHourGlasses(vector< vector<int> > arr, int i, int j){
    int sum = 0;
    for (int k = i; k <= i+3; k++) {
        for (int l = j; l < j+3; l++) {
            if(k == i){
                sum+=arr[k][l];
            } else if (k == i + 1 && l == j + 1){
                sum+=arr[k][l];
            } else if(k == i + 2){
                sum+=arr[k][l];
            }
        }
    }

    return sum;
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }

    //calculate the lower number as the initial max value
    int max = -9 * 7;
    for(int arr_i = 0;arr_i < 4;arr_i++) {
        for (int arr_j = 0; arr_j < 4; arr_j++) {
            int sum = sumHourGlasses(arr, arr_i, arr_j);
            if (sum > max) {
                max = sum;
            }
        }
    }

    cout << max << endl;
    return 0;
}