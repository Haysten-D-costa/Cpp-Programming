/* **********************************************************************************************************
Lab ID        : 8.3
Program Title : Exception Handling
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 30-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to demonstrate multiple catch statements
********************************************************************************************************** */
#include<iostream>
using namespace std;

void test(int x) {
    try {
        cout << "\nIn Try \n";
        if(x == 1) { throw(1); }  //Integer value
        if(x == 0) { throw(0.1); }  //Double value
        if(x == 2) { throw('A'); }  //Character value
        else {
            cout << "Program Successfully compiled !" << endl;
        }
    }
    catch(int a) { cout << "Integer exception caught !" << endl; }
    catch(char b) { cout << "Character exception caught !" << endl; }
    catch(double c) { cout << "Double exception caught !" << endl; }
}
int main() {

    test(10); test(1); test(0); test(2);
    return(0);
}