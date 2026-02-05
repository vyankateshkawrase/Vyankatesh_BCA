#include<iostream>
using namespace std;
class Student
{
    public:
    int id;
    Student()
    {
        id = 10;
    }
};
int main()
{
    Student s;
    cout<<"Student ID: "<<s.id<<endl;
    return 0;
}