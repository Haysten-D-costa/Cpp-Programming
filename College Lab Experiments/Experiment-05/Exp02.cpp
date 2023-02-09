/* **********************************************************************************************************
Lab ID        : 5.2
Program Title : Operator Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
Description   : Program to overload unary - operator using member function
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Weight {
private:
    int kg;
public :
    Weight() {
        kg = 0;
    }
    Weight(int x) {
        kg = x;
    }
    void printWeight() {
        cout<<"Weight = "<<kg<<endl;
    }
    void operator --() {
        --kg;
    }
    void operator --(int ) {
        kg--;
    }
};
int main() {
    Weight W1;
    Weight W2(10);
    cout<<"Original Passed Values(Before decrementing) : "<<endl;
    W1.printWeight();
    W2.printWeight();
    W1--;
    cout<<endl<<"Decremented Values : "<<endl;
    W1.printWeight();
    --W2;
    W2.printWeight();
    return(0);
}
