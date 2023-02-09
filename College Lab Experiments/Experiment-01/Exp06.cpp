/* **************************************************************************************************************************
Lab ID        : 1.6
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program checks and prints whether the entered number is an Even or Odd number
Input         : num
Output        : Number is Even OR Odd number
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int  main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num%2 == 0)
    {
        cout<<endl<<"Number '"<<num<<"' is an EVEN number";
    }
    else
    {
        cout<<endl<<"Number '"<<num<<"' is an ODD number";
    }
    return(0);
}
