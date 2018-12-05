#include <iostream>
#include <cmath>

using namespace std;

int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    int tipPercent;
    int taxPercent;

    cin >> mealCost;
    cin.ignore();

    cin >> tipPercent;
    cin.ignore();

    cin >> taxPercent;
    cin.ignore();

    double totalCost = mealCost + mealCost * (tipPercent/100.0) + mealCost * (taxPercent/100.0);

    // round  to the nearest dollar (integer) and print the result
    cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
    return 0;
}
