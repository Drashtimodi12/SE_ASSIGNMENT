/*14.	Variable Scope:- 
Write a program that demonstrates the difference between local and global variables in C++. 
Use functions to show scope.
•	Objective: Reinforce the concept of variable scope.
*/
#include <iostream>
using namespace std;

int globalVar = 10; // Global variable
void showGlobal() 
{
    cout << "Global variable inside function: " << globalVar << endl;
}

// Function local variable
void showLocal() 
{
    int localVar = 20; // Local variable
    cout << "Local variable inside function: " << localVar << endl;
}

int main() 
{
    cout << "Global variable in main: " << globalVar << endl;
    // Call function global variable
    showGlobal();

    // Call function to demonstrate local variable
    showLocal();

    // Trying to access localVar in main (will cause an error if uncommented)
    // cout << "Local variable in main: " << localVar << endl;

}
