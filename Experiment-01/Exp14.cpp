/* **************************************************************************************************************************
Lab ID        : 1.14
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program prints Grade and Percentage of student.
Input         : Amarks[], n, i, sum, avg;
Output        : Greatest number (out of num1/num2/num3)
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
#include"percentage.h"
#include"grade.h"

using namespace std;
using namespace percentage;
using namespace grade;
int main()
{
    int Amarks[10], n, i, sum = 0;
    cout<<"Enter number of subjects : ";
    cin>>n;
    cout<<endl<<"Enter marks[Out-of/100] scored in '"<<n<<"' subjects : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>Amarks[i];
    }
    cout<<endl<<"Marks you entered :"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<Amarks[i]<<"\t";
    }
    for(i=0; i<n; i++)
    {
        sum = sum + Amarks[i];
    }
    cout<<endl<<endl<<"Percentage of '"<<n<<"' entered subjects = "<<percntg(sum, n)<<"%";
    cout<<endl<<endl<<"Grade obtained = "<<grde(sum, n)<<endl;

    return(0);
}
