/* **************************************************************************************************************************
Lab ID        : 1.10
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes SD, Mean and Variance
Input         : .....
Output        : mean, var and stdDev
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float mean=0, var=0, stdD=0;
    int A[100], i, n;
    cout<<"Enter number of elements : ";
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
        mean = mean + A[i];
    }
    mean = mean / n;
    for(i=0; i<n; i++)
    {
        var = var + pow((A[i] - mean), 2);
    }
    var = var/n;
    stdD = sqrt(var);
    cout<<endl<<endl<<"Mean = "<<mean;
    cout<<endl<<"Variance = "<<var;
    cout<<endl<<"Standard Deviation = "<<stdD;
    return(0);
}
