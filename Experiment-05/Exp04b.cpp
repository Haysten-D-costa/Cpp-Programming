/* **********************************************************************************************************
Lab ID        : 5.4a
Program Title : Operator Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
Description   : Program to overload ++ operator using member functions
********************************************************************************************************** */
#include<iostream>
#include<string>
using namespace std;
class Fraction {
private:
    int num, denom;
public :
    Fraction() {
        num=0;
        denom=0;
    }
    Fraction(int n, int d) {
        num=n;
        denom=d;
    }
    void display() {
        cout<<num<<"/"<<denom<<endl;
    }
    friend Fraction operator +(Fraction &F1, Fraction &F2);
};
Fraction operator +(Fraction &F1, Fraction &F2) {
        Fraction tmp;
        tmp.num = F1.num * F2.denom + F2.num * F1.denom;
        tmp.denom = F1.denom * F2.denom;
        return(tmp);
    }
int main() {
    int n1, n2, d1, d2;
    cout<<"Enter numerator and denominator for fraction 1 : ";cin>>n1>>d1;
    cout<<"Enter numerator and denominator for fraction 2 : ";cin>>n2>>d2;
    Fraction F1(n1, d1);
    Fraction F2(n2, d2);
    Fraction F3;
    cout<<endl<<"Passed Fractions to be added : "<<endl;
    cout<<"First fraction  : ";
    F1.display();
    cout<<"Second fraction : ";
    F2.display();
    F3 = F1 + F2;
    cout<<endl<<"Result of Summation : ";
    F3.display();
    return(0);
}
