/* **************************************************************************************************************************
Lab ID        : 1.9
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes and prints factorial of a number.
Input         : num
Output        : fact
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int i, num, backup, fact = 1;
    cout<<"Enter a number : ";
    cin>>num;
    backup = num;
    while(num != 0)
    {
        fact = fact*num;
        num--;
    }
    cout<<endl<<"Factorial of '"<<backup<<"' = "<<fact;
    return(0);
}
