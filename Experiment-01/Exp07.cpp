/* **************************************************************************************************************************
Lab ID        : 1.7
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program checks and prints the multiples of entered value of num upto range
Input         : num, range
Output        : Multiples of num, upto range
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int num, range, i;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the range upto which required : ";
    cin>>range;
    cout<<endl<<"Multiples of '"<<num<<"' upto "<<range<<" : "<<endl;
    for(i=1; i<=range; i++)
    {
        if(i%num == 0)
        {
            cout<<i<<"\t";
        }
    }
    return(0);
}
