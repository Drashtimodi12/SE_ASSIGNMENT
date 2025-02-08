/*5.	Variables and Constants :- 
Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types 
and perform operations on them.
• Objective: Practice type casting in C++
*/
#include<iostream>
using namespace std;
int main() 
{
    int num1 = 10, num2 = 5; // variables
    float num3 = 5.5; // variables 
    char letter = 'A';  //variables
    const float PI = 3.14159;   //constant

    int sum = num1 + num2;
    double area = PI * num3 * num3; 

    cout << "Integer variables: " << num1 << " and " << num2 << endl;
    cout << "Sum of " << num1 << " and " << num2 << " = " << sum << endl;
    cout << "Character: " << letter << endl;
    cout << "Area of circle with radius " << num3 << " = " << area << endl;
    cout << "Constant PI = " << PI << endl;
}