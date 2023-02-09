/* **********************************************************************************************************
Lab ID        : 5.6
Program Title : Operator Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
Description   : Program to overload >,<,== operator using member functions
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Numbers {
    private:
        int num;             // OVERLOADING [>, <, ==] OPERATORS
    public :
        Numbers() { num = 0; }
        Numbers(int num) { this->num = num; } 
        // Numbers operator <(Numbers N)  { (num < N.num)? cout << "TRUE" : cout << "FALSE"; } 
        // Numbers operator >(Numbers N)  { (num > N.num)? cout << "TRUE" : cout << "FALSE"; }
        // Numbers operator ==(Numbers N) { (num == N.num)? cout << "TRUE" : cout << "FALSE";}

        friend Numbers operator >(Numbers &N1, Numbers &N2)  { (N1.num > N2.num)? cout << "TRUE" : cout << "FALSE"; }
        friend Numbers operator <(Numbers &N1, Numbers &N2)  { (N1.num < N2.num)? cout << "TRUE" : cout << "FALSE"; }
        friend Numbers operator ==(Numbers &N1, Numbers &N2) { (N1.num == N2.num)? cout << "TRUE" : cout << "FALSE";}
};
int main() {
    Numbers N1(20);
    Numbers N2(10);
    N1 > N2;
    return(0);
}
