/* **********************************************************************************************************
Lab ID        : 8.5
Program Title : Exception Handling
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 30-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to implement nested try-catch block and rethrowing of an exception.
********************************************************************************************************** */
#include <iostream>
using namespace std;

void test(int num) {
    try {  //TRY BLOCK-01
        if((num < 0)||(num > 100)) { throw(0); }
        else {
            cout << endl << "TEST 01"
                 << endl << "Program successfully Compiled [01 Passed]..." << endl;
        }
        try {  //TRY BLOCK-02
            if(num %2 != 0) { throw('A'); }
            else {
                cout << endl << "TEST 02"
                     << endl << "Program successfully Compiled [02 Passed]..." << endl;
            }
        }
        catch(char A) { throw; }
    }
    catch(int num) { 
        cout << endl << "TEST 01"
             << endl << "ERROR ! TEST 01 Failure...Number Out of Bound"
             << endl << "\tTEST 02 Not checked !!";
    }    
}
int main() {
    
    try {
        int n;
        cout << "Enter a number : "; cin >> n; 
        test(n); 
    }
    catch(...) {
        cout << endl << "TEST 02"
             << endl << "ERROR ! TEST 02 Failure...Number Not Even"; 
    }
    return(0);
}