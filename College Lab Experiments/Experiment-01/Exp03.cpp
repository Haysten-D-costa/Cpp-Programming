/* **************************************************************************************************************************
Lab ID        : 1.3
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program prints outputs of basic calculator operations using user-defined namespace
Input         : num1, num2
Output        : sum, diff, mult, div
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
namespace calculator
{
    int add(int num1, int num2)
    {
        return(num1+num2);
    }
    int sub(int  num1, int num2)
    {
        return(num1-num2);
    }
    int mult(int num1, int num2)
    {
        return(num1*num2);
    }
    float Div(int num1, int num2)
    {
        return(num1/num2);
    }
}
using namespace std;
using namespace calculator;
int main()
{
    int num1, num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<endl<<"Sum of '"<<num1<<"' and '"<<num2<<"' = "<<add(num1, num2);
    cout<<endl<<"Difference of '"<<num1<<"' and '"<<num2<<"' = "<<sub(num1, num2);
    cout<<endl<<"Multiplication of '"<<num1<<"' and '"<<num2<<"' = "<<mult(num1, num2);
    cout<<endl<<"Division of '"<<num1<<"' and '"<<num2<<"' = "<<Div(num1, num2);
    return(0);
}
