/* **********************************************************************************************************
Lab ID        : 2.1
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program inputs an array and adds a scalar and displays in class
Input         : A[i], n, scalar
Output        : A[i] X scalar
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Number {
private:
    int A[10], scalar, n;
public :
    void initializeArray() {
        cout<<"Enter the number of elements : ";
        cin>>n;
        cout<<endl<<"Enter "<<n<<" elements : "<<endl;
        for(int i=0; i<n; i++) {
            cin>>A[i];
        }
    }
    void addScalarArray() {
        cout<<endl<<"\nEnter the scalar to be added to the array : ";
        cin>>scalar;
        for(int i=0; i<n; i++) {
            A[i] += scalar;
        }
    }
    void displayArray() {
        cout<<endl<<"Array : "<<endl;
        for(int i=0; i<n; i++) {
            cout<<A[i]<<"\t";
        }
    }
};
int main() {
    Number N1;
    N1.initializeArray();
    N1.displayArray();
    N1.addScalarArray();
    N1.displayArray();
    cout<<endl;
    return(0);
}
