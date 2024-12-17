/*18.	Class for a Simple Calculator:- 
Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, 
and division. Create objects to use these functions.
•	Objective: Introduce basic class structure.
*/
#include <iostream>
using namespace std;
class Calculator 
{
public:
    // Function for addition
    float add(float a, float b) 
    {
        return a + b;
    }

    // Function for subtraction
    float subtract(float a, float b) 
    {
        return a - b;
    }

    // Function for multiplication
    float multiply(float a, float b) 
    {
        return a * b;
    }

    // Function for division
    float divide(float a, float b) 
    {
        if (b != 0) 
        {
            return a / b;
        } 
        else 
        {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0; // Return 0 in case of division by zero
        }
    }
};
int main() 
{
    Calculator calc; // Create object
    float num1, num2;
    int choice;

    cout << "Select an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) 
    {
        case 1:
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}