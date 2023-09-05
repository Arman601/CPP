#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Welcome to the Simple Calculator" << endl;
    cout << "--------------------------------" << endl;

    
    


    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the operation (+, -, *, /)
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    // Perform the operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1; // Exit with an error code
    }

    // Display the result
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0; // Exit successfully
}