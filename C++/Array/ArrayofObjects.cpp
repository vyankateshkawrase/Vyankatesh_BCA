#include<iostream>
using namespace std;
class Student
{
    public:
    int rollNo;
    string studentName;
    void getDetails()
    {
        cout<<"Enter Roll Number: ";
        cin>>rollNo;
        cout<<"Enter Student Name: ";
        cin>>studentName;
    }
    void showDetails()
    {
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Student Name: "<<studentName<<endl;
    }
};
int main()
{
    Student students[3];
    for(int i=0;i<3;i++)
    {
        students[i].getDetails();
    }
    for(int i=0;i<3;i++)
    {
        students[i].showDetails();
    }
    return 0;
}