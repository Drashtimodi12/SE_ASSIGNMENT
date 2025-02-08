/*15.	Array Sum and Average:-
Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
•	Objective: Understand basic array manipulation.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double average = sum / n;

    cout << "The sum of the elements is: " << sum << endl;
    cout << "The average of the elements is: " << average << endl;
}