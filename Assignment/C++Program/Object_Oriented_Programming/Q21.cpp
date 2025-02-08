/*21.	Write a C++ program to implement a class called Circle that has private member variables for radius.
Include member functions to calculate the circle's area and circumference.
*/
#include <iostream>
#define PI 3.14  
using namespace std;
class Circle
{
private:
    float radius;
public:
    Circle(float r) 
    {
        radius = r;
    }

    float calculateArea() // calculate the area of the circle
    {
        return PI * radius * radius;
    }

    float calculateCircumference() // calculate the circumference of the circle
    {
        return 2 * PI * radius;
    }

    void display()
    {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main()
{
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle circle(r);
    circle.display();
}
