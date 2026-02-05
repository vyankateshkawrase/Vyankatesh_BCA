#include<iostream>
using namespace std;
class Student
{
    int marks[5];
    public:
    void getMarks()
    {
        cout<<"Enter marks for 5 subjects: "<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void showMarks()
    {
        cout<<"Marks in 5 subjects are: "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Student s;
    s.getMarks();
    s.showMarks();
    return 0;
}