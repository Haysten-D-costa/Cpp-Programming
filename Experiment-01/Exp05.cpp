/* **************************************************************************************************************************
Lab ID        : 1.5
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program checks and prints whether the entered number is a multiple of '3'.
Input         : num
Output        : Number is OR is not a multiple of 3
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num%3 == 0)
    {
        cout<<endl<<"Number '"<<num<<"' is a multiple of 3";
    }
    else
    {
        cout<<endl<<"Number '"<<num<<"' is not a multiple of 3";
    }
    return(0);
}
