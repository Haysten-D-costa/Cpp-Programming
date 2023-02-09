/* **********************************************************************************************************
Lab ID        : 3.4
Program Title : Method Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 29-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program calculates the volume of cube and cylinder using method overload
Input         : --
Output        : --
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
double computeV(double S) {
    return (S*S*S);
}
double computeV(double R, double H) {
    return (3.14 * R * R * H);
}
int main() {
    double Side,Radius,Height;
    cout<<"\nEnter the side of cube : ";
    cin>>Side;
    cout<<"\nEnter the Radius of cylinder : ";
    cin>>Radius;
    cout<<"Enter the height of cylinder : ";
    cin>>Height;
    cout<<"\nRESULTS : \n";
    cout<<" ->Volume of Cube      = "<<computeV(Side);
    cout<<"\n ->Volume of Cylinder  = "<<computeV(Radius, Height);
    return (0);
}
