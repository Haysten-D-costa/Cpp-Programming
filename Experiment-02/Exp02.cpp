/* **********************************************************************************************************
Lab ID        : 2.2
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program inputs two integers and displays its fractional form
Input         : numer, denom
Output        : numer / denom form
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Fraction {
private:
    int numer, denom;
public :
    void getValues() {
        cout<<"Enter the numerator value : ";
        cin>>numer;
        cout<<"Enter the denominator value : ";
        cin>>denom;
    }
    void displayValues() {
        cout<<endl<<"Result [Fraction form] : "<<numer<<" / "<<denom;
    }
};
int main() {
    Fraction F1;
    F1.getValues();
    F1.displayValues();
    cout<<endl;
    return(0);
}
