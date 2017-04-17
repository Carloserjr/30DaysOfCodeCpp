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
/**
 * Objective
 * Today, we're building on our knowledge of Arrays by adding another dimension. Check out the Tutorial tab for
 * learning materials and an instructional video!
 *
 * Context
 * Given a 6 x 6 2D Array, A:
 *
 * 1 1 1 0 0 0
 * 0 1 0 0 0 0
 * 1 1 1 0 0 0
 * 0 0 0 0 0 0
 * 0 0 0 0 0 0
 * 0 0 0 0 0 0
 *
 * We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical
 * representation:
 *
 * a b c
 *   d
 * e f g
 *
 * There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.
 *
 * Task
 * Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.
 *
 * Input Format
 * There are 6 lines of input, where each line contains 6 space-separated integers describing 2D Array A; every value in
 * A will be in the inclusive range of -9 to 9.
 *
 * Constraints
 *  -9 <= A[i][j] <= 9
 *  0 <= i, j <= 5
 *
 * Output Format
 * Print the largest (maximum) hourglass sum found in A.
 *
 * Sample Input
 * 1 1 1 0 0 0
 * 0 1 0 0 0 0
 * 1 1 1 0 0 0
 * 0 0 2 4 4 0
 * 0 0 0 2 0 0
 * 0 0 1 2 4 0
 *
 * Sample Output
 * 19
 *
 * Explanation
 *
 * A contains the following hourglasses:
 * 1 1 1   1 1 0   1 0 0   0 0 0
 *   1       0       0       0
 * 1 1 1   1 1 0   1 0 0   0 0 0
 *
 * 0 1 0   1 0 0   0 0 0   0 0 0
 *   1       1       0       0
 * 0 0 2   0 2 4   2 4 4   4 4 0
 *
 * 1 1 1   1 1 0   1 0 0   0 0 0
 *   0       2       4       4
 * 0 0 0   0 0 2   0 2 0   2 0 0
 *
 * 0 0 2   0 2 4   2 4 4   4 4 0
 *   0       0       2       0
 * 0 0 1   0 1 2   1 2 4   2 4 0
 *
 * The hourglass with the maximum sum (19) is:
 * 2 4 4
 *   2
 * 1 2 4
 */

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