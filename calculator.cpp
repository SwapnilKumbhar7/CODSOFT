#include <iostream>
using namespace std;
int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation
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
            // Check for division by zero
            if (num2 != 0) {
                result = num1/num2;
            } else {
                cerr << "Division by zero is not allowed.\n";
                return 1; // Exit program with an error code
            }
            break;
        default:
            cerr << "Invalid operation.\n";
            return 1; // Exit program with an error code
    }

    // Display the result
    cout << "Result: " << result <<endl;

    return 0;
}
