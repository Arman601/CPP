
#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive
    if (number > 0) {
        std::cout << "The number is positive." << endl;
    } 
    else if (number == 0) {
        std::cout << "The number is zero." <<endl;
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
