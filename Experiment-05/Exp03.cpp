/* **********************************************************************************************************
Lab ID        : 5.3
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
class Age {
private:
    int age;
public :
    Age() {
        age = 0;
    }
    Age(int x) {
        age = x;
    }
    void printAge() {
        cout<<"Age : "<<age<<endl;
    }
    friend void operator ++(Age &A);
    friend void operator ++(Age &A, int );
};
void operator ++(Age &A) {
    A.age++;
}
void operator ++(Age &A, int ) {
    A.age = ++A.age;
}
int main() {
    Age A1(20);
    Age A2;
    cout<<"Old Ages : "<<endl;
    A1.printAge();
    A2.printAge();
    ++A1;
    cout<<endl<<"New Incremented ages : "<<endl;
    A1.printAge();
    A2++;
    A2.printAge();
    return(0);
}

