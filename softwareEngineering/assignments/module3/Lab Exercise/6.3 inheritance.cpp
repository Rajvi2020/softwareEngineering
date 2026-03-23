#include<iostream>
using namespace std;

// Base Class
class Person
{
    public:
    string name;
    int age;

    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class: Student
class Student : public Person
{
    public:
    int marks;

    void getStudent()
    {
        getPerson(); // reuse base class function
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayStudent()
    {
        displayPerson(); // reuse base class function
        cout << "Marks: " << marks << endl;
    }
};

// Derived Class: Teacher
class Teacher : public Person
{
    public:
    string subject;

    void getTeacher()
    {
        getPerson(); // reuse base class function
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void displayTeacher()
    {
        displayPerson(); // reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout << "\n--- Student Details ---" << endl;
    s.getStudent();
    s.displayStudent();

    cout << "\n--- Teacher Details ---" << endl;
    t.getTeacher();
    t.displayTeacher();

    return 0;
}