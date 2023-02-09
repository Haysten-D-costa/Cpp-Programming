/* **************************************************************************************************************************
Lab ID        : 1.22
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program displays age categories for user entered age
Input         : age
Output        : Baby/Children/Teenager/Youth/Adult/Seniors
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<=2)
        cout<<"You're a Baby";
    else if(age>2 && age<=12)
        cout<<"You're a Child";
    else if(age>12 && age<=19)
        cout<<"You're a Teenager";
    else if(age>19 && age<=24)
        cout<<"You're a Youth";
    else if(age>24 && age<=64)
        cout<<"You're an Adult";
    else
        cout<<"You're a Senior";
    return(0);
}
