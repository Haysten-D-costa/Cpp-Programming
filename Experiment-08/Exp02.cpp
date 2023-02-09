/* **********************************************************************************************************
Lab ID        : 8.2
Program Title : Exception Handling
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 30-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to handle array index out of bound exception
********************************************************************************************************** */
#include <iostream>
using namespace std;

void test(int n, int A[]) {
    try {
        if(n > 20) {
            throw(n);
        }else {
            cout << "Enter array elements : ";
            for(int i=0; i<n; i++) {
                cin >> A[i];
            }
            cout << endl << "Array is :\t";
            for(int i=0; i<n; i++) {
                cout << A[i] << "\t";
            }
        }
    }
    catch(int n) {
        cout << endl << "ERROR ! Array index 'Out of Bound' " << endl;
    }
}
int getData() {
    int size = {};
    cout << endl << "Enter size for array : "; 
    cin >> size;
    return(size); 
}
int main() {

    int A[20];
    test(getData(), A);
    test(getData(), A);

    return(0);
}