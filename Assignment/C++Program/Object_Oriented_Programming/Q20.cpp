/*20.	Inheritance Example:-
Write a program that implements inheritance using a base class Person and derived classes Student and Teacher.
Demonstrate reusability through inheritance.
•	Objective: Learn the concept of inheritance.
*/
#include <iostream>
using namespace std;
class Person // base class
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    void displayPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person
{
private:
    string studentID;

public:
    Student(string n, int a, string id) : Person(n, a)
    {
        studentID = id;
    }
    void displayStudentInfo()
    {
        displayPersonInfo(); // Reusing base class function
        cout << "Student ID: " << studentID << endl;
    }
};
class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(string n, int a, string subj) : Person(n, a)
    {
        subject = subj;
    }

    void displayTeacherInfo()
    {
        displayPersonInfo();
        cout << "Subject: " << subject << endl;
    }
};
int main()
{
    Student student("Alice", 20, "S12345");
    cout << "Student Information:" << endl;
    student.displayStudentInfo();

    cout << endl;

    Teacher teacher("Mr. Smith", 45, "Mathematics");
    cout << "Teacher Information:" << endl;
    teacher.displayTeacherInfo();
}