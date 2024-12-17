/*16.	Matrix Addition:-
Write a C++ program to perform matrix addition on two 2x2 matrices.
•	Objective: Practice multi-dimensional arrays.
*/
#include <iostream>
#define max 200
using namespace std;
int main()
{
    int r, c, row, col;
    int arr[max][max], arr1[20][20], sum[20][20], sub[20][20], mul[20][20];
    cout << "Enter rows : ";
    cin >> r;
    cout << "Enter cols : ";
    cin >> c;

    cout << "Enter array elements for array 1 : " << endl;
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Enter array elements for array 2 : " << endl;
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            cin >> arr1[row][col];
        }
    }
    cout << "Array 1" << endl;
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "Array 2" << endl;
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            cout << arr1[row][col] << " ";
        }
        cout << endl;
    }
    // addition logic;
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            sum[row][col] = arr[row][col] + arr1[row][col];
        }
    }
    // to print sum o/p
    cout << "\nArray addition." << endl;
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            cout << sum[row][col] << " ";
        }
        cout << endl;
    }
}
