/* **********************************************************************************************************
Lab ID        : 3.3
Program Title : Method Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 00-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to calculate gross pay of regular and contract employee using method overload.
Input         :
Output        : --
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
void GrossPay(double S) {
    double Gp = (S +((S*15)/100)+((S*5)/100));
    cout<<endl<<"-----------------------------------------------------";
    cout<<endl<<"|  EMPLOYEE  |  HRA  |  OTHER ALLOWANCE  |  SALARY  |"<<endl;
    cout<<"-----------------------------------------------------";
    cout<<endl<<"   Regular      15%     5%                  "<<Gp<<endl;

    cout<<"-----------------------------------------------------"<<endl;
}
void GrossPay(float S) {
    double Gp = (S +((S*8)/100)+((S*5)/100));
    cout<<"   Contract     8%      5%                  "<<Gp<<endl;
    cout<<"-----------------------------------------------------";
}
int main() {
    double Rsalary;
    float Csalary;
    cout<<"Enter salary of Regular employee : ";
    cin>>Rsalary;
    cout<<"Enter salary of Contract based employee : ";
    cin>>Csalary;
    cout<<endl<<"PAY SLIP TABLE : ";
    GrossPay(Rsalary);
    GrossPay(Csalary);
    return(0);
}
