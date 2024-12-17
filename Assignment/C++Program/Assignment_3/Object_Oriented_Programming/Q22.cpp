/* 22.	Write a C++ program to create a class called Rectangle that has private member variables for length and
width. Implement member functions to calculate the rectangle's area and perimeter.
*/
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        if (l > 0 && w > 0)
        {
            length = l;
            width = w;
        }
        else
        {
            length = 0;
            width = 0;
            cout << "Invalid dimensions! Length and width set to 0." << endl;
        }
    }
    float calculateArea()
    {
        return length * width;
    }
    float calculatePerimeter()
    {
        return 2 * (length + width);
    }
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};
int main()
{
    float l, w;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    Rectangle rect(l, w);
    rect.display();
}