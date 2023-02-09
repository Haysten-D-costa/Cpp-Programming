/* **************************************************************************************************************************
Lab ID        : 1.23
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes and displays the value of 'F'
Input         : q1, q2, r1, r2
Output        : 'F'
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
const float pi = 3.1415;
const float e = 8.8542;
using namespace std;
int main()
{
    double F;
    float q1, q2, r1, r2;
    cout<<"Enter value of force 'q1' : ";
    cin>>q1;
    cout<<"Enter value of force 'q2' : ";
    cin>>q2;
    cout<<"Enter value of distance 'r1' : ";
    cin>>r1;
    cout<<"Enter value of distance 'r2' : ";
    cin>>r2;
    F = (q1 * q2 * r2) / (4 * pi * e * r1 * r1);
    cout<<endl<<"Computed value(F) = "<<F;
    return(0);
}
