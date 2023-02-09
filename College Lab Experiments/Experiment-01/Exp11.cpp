/* **************************************************************************************************************************
Lab ID        : 1.11
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program checks and prints the greatest number out of 3 entered numbers.
Input         : num1, num2, num3
Output        : Greatest number (out of num1/num2/num3)
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter  second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    if(num1 > num2)
    {
        if(num1 > num3)
            cout<<endl<<"First number '"<<num1<<"' is greatest ";
        else
            cout<<endl<<"Third number '"<<num3<<"' is greatest ";
    }
    else
    {
        if(num2 > num3)
            cout<<endl<<"Second number '"<<num2<<"' is greatest ";
        else
            cout<<endl<<"Third number '"<<num3<<"' is greatest ";
    }
    return(0);
}
