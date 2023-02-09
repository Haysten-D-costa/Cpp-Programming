/* **********************************************************************************************************
Lab ID        : 8.6
Program Title : Exception Handling
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 30-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to throw an exception if users enters a number outside the range [1-99]
********************************************************************************************************** */
#include <iostream>
using namespace std;

void test(int num) {
    try {
        if((num < 1)||(num > 99)) {
            throw('A');
        }else {
            cout << "Program successfully Compiled !";
        }
    }
    catch(char A) {
        cout << "ERROR ! Number entered is Out of Bound ! ";
    }
}
int main() {
    int num;
    cout <<"Enter a number within range [1-99] : "; cin >> num;
    test(num);
    return(0);
}
