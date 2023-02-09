/* **********************************************************************************************************
Lab ID        : 7.6
Program Title : Inheritance
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 15-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to Implement Virtual base class 
********************************************************************************************************** */
#include <iostream>
using namespace std;

class A
{   public:
    int a;
    void setA(int a1)
    { a=a1;}
};
class B: public virtual A
{   public:
    int b;
    void setB(int b1)
    {b=b1;}
};
class C: public virtual A
{   public:
    int c;
    void setC(int c1)
    { c=c1;}
};
class D:public C,public B
{   public:
    void disp()
    {   cout<<"a="<<a;
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};
int main()
{   D obj;
    obj.setA(2);
    obj.setB(3);
    obj.setC(4);
    obj.disp();
    return (0);
}


