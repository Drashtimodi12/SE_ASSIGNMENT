/*7.	Operator Demonstration:- 
Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations 
using each type of operator and display the results.
•	Objective: Reinforce understanding of different types of operators in C++.
*/
#include <iostream>
using namespace std;
int main() 
{
    int a = 10, b = 5, c = 10, d = 20;

// Arithmetic Operators
    cout << "\t*Arithmetic Operators Demonstration*" << endl;
    cout << "Addition.\n"
         << a << '+' << b << '=' << a + b << endl;
    cout << "Subtaction.\n"
         << a << '-' << b << '=' << a - b << endl;
    cout << "Multiplication.\n"
         << a << '*' << b << '=' << a * b << endl;
    if ( b != 0)
    {
        cout << "Division.\n"
            << a << '/' << b << '=' << a / b << endl;
        cout << "Modulo.\n"
            << a << '%' << b << '=' << a % b << endl;
    }
    else
    {
        cout << "Division and Modulo by zero is not possible." <<endl;
    }
    cout << "Post Increment of a (a++) = "
         << a++ << endl;
    cout << "After Post Increment, a = "
         << a << endl;
    cout << "Pre Increment of a (++a) = "
         << ++a << endl;
    cout << "Post Decrement of b (b--) = "
         << b-- << endl;
    cout << "After Post Decrement, b = " 
         << b << endl;
    cout << "Pre Decrement of b (--b) = "
         << --b << endl;

// Relational Operators
    cout << "\t*Relational Operators Demonstration*" << endl;
    cout << "Grater (a > b): " << (a > b) << "\n// True (1) if a is greater than b, otherwise False (0)" << endl;
    cout << "Less (a < b): " << (a < b) << "\n// True (1) if a is less than b, otherwise False (0)" << endl;
    cout << "Greater Equal (c >= d): " << (c >= d) << "\n// True (1) if c is greater than or equal d, otherwise False (0)" << endl;
    cout << "Less Equal (c <= d): " << (c <= d) << "\n// True (1) if c is less than or equal to d" << endl;
    cout << "Double Equal (c == d): " << (c == d) << "\n// True (1) if c is equal to d" << endl;
    cout << "Not Equal (c != d): " << (c != d) << "\n// True (1) if c is not equal to d" << endl;

// Logical Operators
    cout << "\t*Logical Operators Demonstration*" << endl;
    cout << "Logical AND (a > 90 && b > 0) : " << (a > 90 && b > 0) << endl;
    cout << "Logical OR (a < 12 || b > 34) : " << (a < 12 || b > 34) << endl;
    cout << "Print Third (c) number value : " << (c) << endl;
    cout << "Logical NOT (!c) : " << (!c) << "\t //True if c value is zero (false in logical terms)" << endl;

// Bitwise Operators
    int p = 12, q = 5;  // Binary: 12 = 1100, 5 = 0101
    cout << "\t*Bitwise Operators Demonstration*" << endl;
    cout << "Bitwise AND (p & q) : " << (p & q) << endl;
    cout << "Bitwise OR (p | q) : " << (p | q) << endl;
    cout << "Bitwise XOR (p ^ q) : " << (p ^ q) << endl;
    cout << "Bitwise First Complement (`p) : " << (~p) << endl; //[-(num+1)]
    cout << "Bitwise Left Shift (p << q) : " << (p << q) << endl;
    cout << "Bitwise Right Shift (p >> q) : " << (p >> q) << endl;
}