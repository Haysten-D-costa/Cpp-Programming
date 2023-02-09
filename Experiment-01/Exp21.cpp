/* **************************************************************************************************************************
Lab ID        : 1.21
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program performs required operations as per entered operation code
Input         : opCode, h, bs, r, s, l, b
Output        : Area of Triangle, Circle, Square, Rectangle
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int opCode;
    cout<<"************************************"<<endl;
    cout<<endl<<"-> 1 : To find area of Rectangle"<<endl;
    cout<<"-> 2 : To find area of Triangle"<<endl;
    cout<<"-> 3 : To find area of Square"<<endl;
    cout<<"-> 4 : To find area of Circle"<<endl;
    cout<<endl<<"************************************"<<endl;
    cout<<endl<<"Enter operation code : ";
    cin>>opCode;
    switch(opCode)
    {
    case 1 :float areaR, l, b;
            cout<<"AREA (Rectangle) Operation...chosen ! "<<endl;
            cout<<endl<<"Enter length of rectangle : ";
            cin>>l;
            cout<<"Enter breadth of rectangle : ";
            cin>>b;
            areaR = l*b;
            cout<<endl<<"Area of Rectangle = "<<areaR;
            break;

    case 2 :float areaT, bs, h;
            cout<<"AREA (Triangle) Operation...chosen ! "<<endl;
            cout<<endl<<"Enter base of triangle : ";
            cin>>bs;
            cout<<"Enter height of triangle : ";
            cin>>h;
            areaT = 0.5*bs*h;
            cout<<endl<<"Area of Triangle = "<<areaT;
            break;

    case 3 :float areaS, s;
            cout<<"AREA (Square) Operation...chosen ! "<<endl;
            cout<<endl<<"Enter side of Square : ";
            cin>>s;
            areaS = s*s;
            cout<<endl<<"Area of Square = "<<areaS;
            break;

    case 4 :float areaC, r;
            cout<<"AREA (Circle) Operation...chosen ! "<<endl;
            cout<<endl<<"Enter radius of circle : ";
            cin>>r;
            areaC = 3.14*r*r;
            cout<<endl<<"Area of Circle = "<<areaC;
            break;

    default:cout<<endl<<"Incorrect operation code entered ! ";
    }
    return(0);
}
