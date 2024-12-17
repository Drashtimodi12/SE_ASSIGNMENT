/*13.	Factorial Calculation Using Recursion:- 
Write a C++ program that calculates the factorial of a number using recursion.
•	Objective: Understand recursion in functions.
*/
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1); // Returning the result of the multiplication
    }
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;                                  
    cout << "Factorial = " << fact(num) << endl; 
}
