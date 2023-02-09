/* **********************************************************************************************************
Lab ID        : 8.1
Program Title : Exception Handling
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 30-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to include a function to enter user input for two double values and to
                divide two numbers. Include a try catch block to handle the divide by zero exception.
********************************************************************************************************** */
#include<iostream>
using namespace std;

void test(float x, float y) {
    try {
        if((x-y) == 0) { throw(0); }  //Integer value
        else {
            cout << "Result of Division : " << x/(x-y);
        }
    }
    catch(int a) { cout << endl << "[EXCEPTION CAUGHT]-> Check input Division 'NOT DEFINED'(0) !" << endl; }
}
int main() {
    //Subodhs program...
    test(10, 5);
    test(5, 5);
    return(0);
}