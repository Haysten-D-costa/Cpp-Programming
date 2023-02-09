/* **********************************************************************************************************
Lab ID        : 3.2
Program Title : Method Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 00-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to add two numbers using method overload
Input         :
Output        : --
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
void addNum(int &a, int &b) {
    int sum = a + b;
    cout<<endl<<"->Sum of INTEGER NUMBERS = "<<sum<<endl;
}
void addNum(float &a, float &b) {
    float sum = a + b;
    cout<<"->Sum of FLOAT NUMBERS   = "<<sum<<endl;
}
int main() {
    int num1, num2;
    float nm1, nm2;
    cout<<"\nENTER REQUIRED DETAILS :\n"<<endl;
    cout<<"Enter two integer numbers : ";
    cin>>num1>>num2;
    cout<<"Enter two float numbers : ";
    cin>>nm1>>nm2;
    cout<<"\nRESULT OF SUMMATION : \n";
    addNum(num1, num2);
    addNum(nm1, nm2);
}
