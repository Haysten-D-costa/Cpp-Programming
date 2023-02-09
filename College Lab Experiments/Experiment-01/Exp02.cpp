/* *****************************************************************************************************************
Lab ID        : 1.2
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
--------------------------------------------------------------------------------------------------------------------
Description   : Program accepts and prints sum of two numbers
Input         : num1, num2
Output        : sum
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
*******************************************************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, sum;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    sum = num1 + num2;
    cout<<endl<<"Sum of '"<<num1<<"' and '"<<num2<<"' = "<<sum;
    return(0);
}
