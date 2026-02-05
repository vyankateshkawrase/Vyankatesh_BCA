#include<iostream>
using namespace std;    
class Base1
{   
public:
    void display1()
    {
        cout << "This is Base class 1" << endl;
    }
};
class Base2
{
public:
    void display2()
    {
        cout << "This is Base class 2" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "This is the Derived class" << endl;
    }
};
int main()
{
    Derived obj;
    obj.display1();
    obj.display2();
    obj.show();
    return 0;
}