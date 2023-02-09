/* **********************************************************************************************************
Lab ID        : 8.4
Program Title : Exception Handling
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 30-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to handle all types of exceptions using a single catch block.
********************************************************************************************************** */
#include<iostream>
using namespace std;

void test(int x) {
    try {
        if(x == 1) { throw(1); }  //Integer value
        if(x == 0) { throw(0.1); }  //Double value
        if(x == 2) { throw('A'); }  //Character value
        else {
            cout << "Program Successfully compiled !";
        }
    }
    catch(...) { cout << "Exception caught !" << endl; }
}
int main() {

    test(1); test(0); test(10); test(2);
    return(0);
}