#include<iostream>
using namespace std;
class Student
{
    int id;
    public:
    Student(int studentId) // Parameterized constructor
    {
        id = studentId;
    }
    Student(const Student &s) // Copy constructor
    {
        id = s.id;
    }
    void display()
    {
        cout<<"Student ID: "<<id<<endl;
    }
};
int main()
{
    Student s1(1001); // Creating object using parameterized constructor
    Student s2 = s1; // Creating object using copy constructor
    s1.display();
    s2.display();
    return 0;
}