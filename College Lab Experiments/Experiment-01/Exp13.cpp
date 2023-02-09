/* **************************************************************************************************************************
Lab ID        : 1.13
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program prints the Average of an array of numbers.
Input         : A[], n;
Output        : avg(average of numbers entered in array)
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int A[100], n, i, sum =0, avg;
    cout<<"Enter nummber of elements : ";
    cin>>n;
    cout<<endl<<"Enter '"<<n<<"' elements : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<endl<<"Elements you entered :"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<"\t";
    }
    for(i=0; i<n; i++)
    {
        sum = sum + A[i];
    }
    avg = sum/n;
    cout<<endl<<endl<<"Average of '"<<n<<"' entered array elements = "<<avg;
    return(0);
}
