/* **************************************************************************************************************************
Lab ID        : 1.8
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes and prints Quotient and remainder of numbers.
Input         : num1, num2
Output        : quo and rem
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, rem, quo;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    rem = num1%num2;
    quo = num1/num2;
    cout<<endl<<"Quotient of '"<<num1<<"' and '"<<num2<<"' = "<<quo;
    cout<<endl<<"Remainder of '"<<num1<<"' and '"<<num2<<"' = "<<rem;
    return(0);
}
