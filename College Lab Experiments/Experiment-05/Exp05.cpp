/* **********************************************************************************************************
Lab ID        : 5.5
Program Title : Operator Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
Description   : Program to overload ++ operator using friend function
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Number {
private:
    int num;
public :
    Number() {
        num = 0;
    }
    Number(int x) {
        num = x;
    }
    void printAge() {
        cout<<"-> Your number is : "<<num<<endl;
    }
    friend void operator --(Number &N);
    friend void operator --(Number &N, int );
};
void operator --(Number &N) {
    N.num--;
}
void operator --(Number &N, int ) {
    N.num = --N.num;
}
int main() {
    Number N1(20);
    Number N2;
    cout<<"Numbers before Decrementing : "<<endl;
    N1.printAge();
    N2.printAge();
    --N1;
    cout<<endl<<"Numbers after Decrementing (by 1 values) : "<<endl;
    N1.printAge();
    N2--;
    N2.printAge();
    return(0);
}

