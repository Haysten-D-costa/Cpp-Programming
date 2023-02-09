#include<iostream>
using namespace std;

class A
{
public:
     A()
     {
          cout<<"Constructor of base class\n";
     }
     virtual~A()
     {
          cout<<"destructor of base class\n";
     }
};
class B: public A
{
public:
     B()
     {
          cout<<"Constructor of derived class\n";
     }
     ~B()
     {
          cout<<"destructor of derived class\n";
     }
};
int main()
{
     A *ptr=new B();
     delete ptr;
     return 0;
}