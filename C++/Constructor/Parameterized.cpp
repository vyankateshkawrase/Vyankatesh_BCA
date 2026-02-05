#include<iostream>
using namespace std;
class Student
{
    public:
    int id;
    Student(int studentId)
    {
        id = studentId;
    }
};
int main()
{
    Student s1(101);
    cout<<"Student 1 ID: "<<s1.id<<endl;

    Student s2(202);
    cout<<"Student 2 ID: "<<s2.id<<endl;

    return 0;
}