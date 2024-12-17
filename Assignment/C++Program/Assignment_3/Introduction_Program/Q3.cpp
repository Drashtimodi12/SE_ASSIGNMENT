/*3.	POP vs. OOP Comparison Program:-
Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle,
and another using Object-Oriented Programming (OOP) with a class and object for the same task.
o Objective: Highlight the difference between POP and OOP approaches.
*/


// area of rectangle (POP)
/*#include <iostream>
using namespace std;
int main()
{
    float length, width, area;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    area = length * width;
    cout << "Area of the rectangle is: " << area << endl;
}
*/


//area of rectangle using class and object (OOP)
#include<iostream>
using namespace std;
class Rectangle
{
public:
    float length, width, area;

    Rectangle(float l = 0, float w = 0)
    {
        length = l;
        width = w;
    }
    void data()
    {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }
    void calculateArea()
    {
        area = length * width;
    }
    void displayArea()
    {
        cout << "Area of the rectangle is: " << area << endl;
    }
};
int main()
{
    Rectangle obj;
    obj.data();
    obj.calculateArea();
    obj.displayArea();
}