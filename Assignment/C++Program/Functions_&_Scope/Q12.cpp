/*12.	Simple Calculator Using Functions:- 
Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). 
The main function should call these based on user input.
•	Objective: Practice defining and using functions in C++.
*/
#include <iostream>
using namespace std;

// Function to display the result
void show(int a, char ch, int b, int res)
{
    cout << a << " " << ch << " " << b << " = " << res << endl;
}

// Function for addition
void add(int a, int b)
{
    show(a, '+', b, a + b);
}

// Function for subtraction
void subtract(int a, int b)
{
    show(a, '-', b, a - b);
}

// Function for multiplication
void multiply(int a, int b)
{
    show(a, '*', b, a * b);
}

// Function for division
void divide(int a, int b)
{
    if (b != 0)
    {
        show(a, '/', b, a / b);
    }
    else
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

// Function for modulo
void modulo(int a, int b)
{
    if (b != 0)
    {
        show(a, '%', b, a % b);
    }
    else
    {
        cout << "Error: Modulo by zero is not allowed." << endl;
    }
}

int main()
{
    int choice, num1, num2;

    do
    {
        cout << "\n\t*Calculator Menu*";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulo";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice)
        {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        case 5:
            modulo(num1, num2);
            break;
        case 6:
            cout << "Exit the program" << endl;
            break;
        default:
            cout << "Invalid choice! Please select a valid option." << endl;
            break;
        }
    } 
    while (choice != 6);
}
