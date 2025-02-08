/*2.	Basic Input/Output:- Write a C++ program that accepts user input for their name and age and then displays
 a personalized greeting.
•	Objective: Practice input/output operations using cin and cout.
*/

// cout<< it will works as printf function of c.
// cin>> it will works as scanf function of c.
#include <iostream>
using namespace std; // scope define for std
int main()
{
    int age;
    string name;

    cout << "Enter Name : "; // cout<< it will works as printf function of c.
    cin >> name;                   // cin>> it will works as scanf function of c.
    cout << "Enter Age : ";
    cin >> age;
    cout << "\t*Display Information.*\t" << endl;
    cout << "Name : " << name << endl
         << "Age : " << age << endl;
}