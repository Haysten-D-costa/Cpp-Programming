/* **********************************************************************************************************
Lab ID        : 2.7
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to accept details of employees and print the payslip
Input         : -
Output        : -
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
#include<string>
#include"paySlip.h"
using namespace std;
using namespace paySlip;
int main() {
    int n, Id;
    string name;
    float S;
    float ac, am;
    long int num;
    Employee E[10];
    PayScale P[10];
    cout<<"Enter the no. of entries needed : ";
    cin>>n;
    cout<<"ENTER DETAILS OF "<<n<<"EMPLOYEES : \n";
    for(int i=0; i<n; i++) {
        cout<<"\nEnter details of Employee "<<i+1<<endl;
        cout<<endl<<"Enter Employee ID : ";
        cin>>Id;
        cout<<"Enter Employee Name : ";
        cin>>name;
        cout<<"Enter Employee Number : ";
        cin>>num;
        E[i].setID(Id);
        E[i].setName(name);
        E[i].setNumber(num);
        cout<<endl<<"Enter the pay-scale details : \n";
        cout<<"Enter Account number : ";
        cin>>ac;
        cout<<"Enter Amount : ";
        cin>>am;
        cout<<"Enter Salary : ";
        cin>>S;
        P[i].setAccno(ac);
        P[i].setAmount(am);
    }
    cout<<endl<<"\nDETAILS OF EMPLOYEES : \n";
    for(int i=0; i<n; i++) {
        cout<<endl<<"Employee "<<i+1<<"....."<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"Employee ID           : "<<E[i].getID()<<endl;
        cout<<"Employee Name         : "<<E[i].getName()<<endl;
        cout<<"Employee Phone number : "<<E[i].getNumber()<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<" (*)Employee Account number : "<<P[i].getAccno()<<endl;
        cout<<" (*)Employee Cash Balance   : "<<P[i].getAmount()<<endl;
        cout<<" (*)Employee Salary         : ";
        P[i].computeSalary(S);
    }
    cout<<endl;
    return(0);
}
