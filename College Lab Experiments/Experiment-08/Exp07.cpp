/* **********************************************************************************************************
Lab ID        : 8.7
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
        if(num == 0) { throw(0); }
        try {  //TRY BLOCK-02
            if(num == 1) { throw('A'); }
            try {  //TRY BLOCK-03
                if(num == 2) { throw(0.1); }
            }
            catch(double) {
                cout << endl << "Double Exception !";
                throw; }
        }
        catch(char) { 
            cout << endl << "Character Exception !";
            throw; }
    }
    catch(int) { 
        cout << endl << "Integer Exception !";
        throw; }  
}  
int main() {
    
    try {
        int n;
        cout << "Enter desired charaacter : "; cin >> n; 
        test(n); 
    }
    catch(...) {
        cout << endl << "ERROR ! Number not as per requirements"; }
    return(0);
}