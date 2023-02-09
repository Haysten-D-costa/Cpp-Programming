/* **********************************************************************************************************
Lab ID        : 3.5
Program Title : Method Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 29-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to calculate area of triangle and circle using method overload.
Input         :
Output        : --
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
double computeArea(double R) {
    return(3.14 * R * R);
}
double computeArea(double B, double H) {
    return(0.5 * B * H);
}
int main() {
    double radius, base, height;
    cout<<"\nEnter radius of circle : ";
    cin>>radius;
    cout<<"\nEnter base of triangle : ";
    cin>>base;
    cout<<"Enter height of triangle : ";
    cin>>height;
    cout<<"\nRESULTS : ";
    cout<<"\n ->Area of Circle      = "<<computeArea(radius);
    cout<<"\n ->Area of Triangle    = "<<computeArea(base, height);
    return(0);
}
