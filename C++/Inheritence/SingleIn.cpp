#include<iostream>
using namespace std;    
class SingleIn
{
public:
    void display()
    {
        cout << "This is a single inheritance" << endl;
    }
};
class Derived : public SingleIn
{
public:
    void show()
    {
        cout << "This is the derived class" << endl;
    }
};
int main()
{
    Derived obj;
    obj.display();
    obj.show();
    return 0;
}