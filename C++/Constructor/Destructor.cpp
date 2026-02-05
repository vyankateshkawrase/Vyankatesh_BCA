#include<iostream>
using namespace std;
class Student
{
    public:
    int age;
    Student(int a) 
    {
        age = a;
        cout << "Constructor called. Age is set to " << age << endl;
    }
    ~Student()
    {
        cout << "Destructor called for age " << age << endl;
    }
};
int main()
{
    Student s1(20);
    {
        Student s2(25);
    } 
    return 0;
}