/*6.	Type Conversion:-
Write a C++ program that performs both implicit and explicit type conversions and prints the results.
•	Objective: Practice type casting in C++.

// Implicit
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    char y = 'a';
    // y implicitly converted to int. ASCII
    x = x + y;
    // x is implicitly converted to float
    float z = x + 1.0;
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;
}*/
// Explicict
#include <iostream>
using namespace std;
int main()
{
    double x = 1.2;
    // Explicit conversion from double to int
    int sum = (int)x + 1;
    cout << "Sum = " << sum;
}