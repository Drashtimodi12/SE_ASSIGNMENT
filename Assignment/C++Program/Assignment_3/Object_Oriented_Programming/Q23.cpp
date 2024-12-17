/* 23.	Write a C++ program to create a class called Person that has private member variables for name, age and country.
Implement member functions to set and get the values of these variables.
*/
#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string country;

public:
    void set_data(string n, int a, string c) 
    {
        name = n;
        age = a;
        country = c;
    }
    void get_data()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Country : " << country << endl;
    }
};
int main()
{
    Person p;
    p.set_data("Drashti", 20, "India");
    p.get_data();
}
