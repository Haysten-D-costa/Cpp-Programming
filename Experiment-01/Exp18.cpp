/* **************************************************************************************************************************
Lab ID        : 1.18
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes and prints the Median of a number array
Input         : Anum[], n
Output        : median
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int Anum[100], n, i, mid;
    float ans;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl<<"Enter '"<<n<<"' elements : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>Anum[i];
    }
    cout<<endl<<"Array Elements you entered :"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<Anum[i]<<"\t";
    }
    mid = (0+(n-1))/2;
    if(n%2 == 0)
    {
        cout<<endl<<endl<<"Median = "<<(Anum[mid] + Anum[mid+1])/2;
    }
    else
    {
        cout<<endl<<endl<<"Median = "<<(Anum[mid]);
    }
    return(0);
}
