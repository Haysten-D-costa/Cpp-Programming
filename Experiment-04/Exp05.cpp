/* **********************************************************************************************************
Lab ID        : 4.5
Program Title : Constructors and Destructors
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to Add and Subtract two complex numbers.
Input         : -
Output        : -
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Complex {
private:
    int imag1,imag2, real1,real2;
public:
    Complex(int r1,int i1,int r2,int i2) {
        imag1 = i1;
        real1 = r1;
        imag2 = i2;
        real2 = r2;
    }
    void display() {
        cout<<endl<<"First number entered  : "<<real1<<" + "<<imag1<<"i";
        cout<<endl<<"Second number entered : "<<real2<<" + "<<imag2<<"i"<<endl;
        cout<<endl<<"RESULTS : "<<endl;
        cout<<" -> Summation  : "<<real1 + real2<<" + "<<imag1 + imag2<<"i"<<endl;
        cout<<" -> Difference : "<<real1 - real2<<" + "<<imag1 - imag2<<"i"<<endl;
    }
};
int main() {
    int im1,im2,rl1,rl2;
    cout<<"Enter the real and imaginary parts of number 1 : ";
    cin>>rl1>>im1;
    cout<<"Enter the real and imaginary parts of number 2 : ";
    cin>>rl2>>im2;
    Complex C1(rl1, im1, rl2, im2);
    C1.display();
    return(0);
}
