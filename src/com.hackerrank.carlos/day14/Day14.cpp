#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Add your code here
    Difference(vector<int> elements){
        this->elements = elements;
    }

    void computeDifference(){
        int min = 100;
        int max = 0;
        for(int element : this->elements){
            if(element < min){
                min = element;
            }

            if (element > max){
                max = element;
            }
        }

        maximumDifference = max - min;
    }
};



int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}