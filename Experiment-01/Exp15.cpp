/* **************************************************************************************************************************
Lab ID        : 1.15
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes the area of circle and triangle
Input         : r{Circle}, b, h(RA Triangle)
Output        : Area of Triangle and Circle
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
const double pi = 3.14; //USER DEFINED CONSTANT (pi)
using namespace std;
double areaC(double r, double pi) //COMPUTES AREA (CIRCLE)
{
    return(pi*r*r); //RETURNS VALUE TO FINAL RESULT
}
double areaT(double b, double h) //COMPUTES AREA (TRIANGLE)
{
    return(0.5*b*h);
}
int  main()
{
    int r, b, h; //DECLARATION OF VARIABLES
    cout<<"Enter radius of circle : ";
    cin>>r; //INPUT OF VAUES
    cout<<endl<<"Enter base of Triangle : ";
    cin>>b;
    cout<<"Enter height of Triangle : ";
    cin>>h;
    //OUTPUT OF FINAL RESULT
    cout<<endl<<"Area of Circle with radius '"<<r<<"' = "<<areaC(r, pi)<<endl;
    cout<<"Area of Triangle with base '"<<b<<"' and height '"<<h<<"' = "<<areaT(b, h);
    return(0);
}
