/*17.	String Palindrome Check:- 
Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).
•	Objective: Practice string operations.
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout << "Enter a String : ";
    getline(cin, name);

    int start = 0;
    int end = name.length() - 1;
    bool isPalindrome = true;   // boolean variable

    while (start < end) 
    {
        if (name[start] != name[end]) 
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) 
    {
        cout << "The string is a palindrome." << endl;
    } 
    else 
    {
        cout << "The string is not a palindrome." << endl;
    }
}