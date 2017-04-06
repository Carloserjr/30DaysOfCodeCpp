#include <iostream>

using namespace std;

int main(){
    // Print a message on console
    cout << "Hello, World." << endl;

    // Define a variable to receive the text from console
    string message;

    // Read a text from console
    getline(cin, message);

    // Print a message on console
    cout << message  << endl;

    return 0;
}