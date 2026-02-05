#include<iostream>
using namespace std;
class Student
{
    public:
    
    int marks[5];
    void setMarks()
    {
        cout<<"Enter marks of 5 subjects:"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void displayMarks()
    {
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
    s.setMarks();
    s.displayMarks();
    return 0;
}