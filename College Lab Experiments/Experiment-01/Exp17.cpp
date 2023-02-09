/* **************************************************************************************************************************
Lab ID        : 1.17
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes and prints the Max, Min and Average of a number array
Input         : Anum[], n
Output        : maxE, minE and avg
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    int Anum[100], n, i, sum=0, avg, maxE, minE;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl<<"Enter '"<<n<<"' elements : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>Anum[i];
    }
    cout<<endl<<"Elements you entered :"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<Anum[i]<<"\t";
    }
    maxE = Anum[0];
    minE = Anum[0];
    for(i=0; i<n; i++)
    {
        sum = sum + Anum[i];
        if(Anum[i]> maxE)

            maxE = Anum[i];
        if(Anum[i]< minE)
            minE = Anum[i];
    }
    avg = sum/n;
    cout<<endl<<endl<<"Average of '"<<n<<"' entered array elements = "<<avg<<endl;
    cout<<endl<<"Maximum element in the array of numbers : "<<maxE<<endl;
    cout<<"Minimum element in the array of numbers : "<<minE;
    return(0);
}
