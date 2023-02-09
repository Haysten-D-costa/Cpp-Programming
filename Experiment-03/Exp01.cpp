/* **********************************************************************************************************
Lab ID        : 3.1
Program Title : Method Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 00-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to swap integers, characters and double values using method overloading
Input         : num1, numm2, char1, char2, double1, double2
Output        : --
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;

template <class T>
void Swap(T *a, T *b) {
    T temp = *b; 
    *b = *a;
    *a = temp;
    cout<<"->Numbers     : "<<*a<<" and "<<*b<<endl;
}
// void Swap(char &a, char &b) {
//     int temp = b;
//     b = a;
//     a = temp;
//     cout<<"->Characters  : "<<a<<" and "<<b<<endl;
// }
// void Swap(double &a, double &b) {
//     int temp = b;
//     b = a;
//     a = temp;
//     cout<<"->Double      : "<<a<<" and "<<b<<endl;
// }
int main() {
    // int num1, num2;
    // char char1, char2;
    // double double1, double2;
    // cout<<"\nENTER THE REQUIRED DETAILS : "<<endl;
    // cout<<endl<<"Enter two integer values : ";
    // cin>>num1>>num2;
    // cout<<"Enter two char values : ";
    // cin>>char1>>char2;
    // cout<<"Enter two double values : ";
    // cin>>double1>>double2;
    // cout<<"\nVALUES BEFORE SWAPING :\n";
    // cout<<"->Numbers     : "<<num1<<" and "<<num2<<endl;
    // cout<<"->Characters  : "<<char1<<" and "<<char2<<endl;
    // cout<<"->Double      : "<<double1<<" and "<<double2<<endl;
    // cout<<"\nVALUES AFTER SWAPING :\n";
    // Swap(num1, num2);
    // Swap(char1, char2);
    // Swap(double1, double2);

    int a=5, b=10;
    Swap <int> (&a, &b);
    char c = 'A', d = 'B';
    Swap <char> (&c, &d);
    double e = 10.5, f = 20.5;
    Swap <double> (&e, &f);
    return(0);
}
