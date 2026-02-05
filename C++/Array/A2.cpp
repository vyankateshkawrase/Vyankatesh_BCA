#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int marks[5];
    void setDetails()
    {
        cout<<"Enter student name:"<<endl;
        cin>>name;
        cout<<"Enter marks of 5 subjects:"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void displayDetails()
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Marks in 5 subjects are:"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<endl;
        }
    }
};
int main()
{
    Student s;
    s.setDetails();
    s.displayDetails();
    return 0;
}