/* **********************************************************************************************************
Lab ID        : 2.8
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program performs basic calculator operations
Input         : num1, num2
Output        : sum, prod, sub, div
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Calculator {
private:
    char rep = 'Y';
    float sum, sub, div, mult, num1, num2;
public:
    char repOperation() {
        cout<<endl<<"Do you want to try again ? [Y/N] : ";
        cin>>rep;
        if((rep == 'Y')||(rep == 'y')) {
            return('Y');
        }else {
            return('N');
        }
    }
    float computeSum(float num1, float num2) {
        return(num1 + num2);
    }
    float computeSub(float num1, float num2) {
        return(num1 - num2);
    }
    float computeDiv(float num1, float num2) {
        return(num1 / num2);
    }
    float computeMult(float num1, float num2) {
        return(num1 * num2);
    }
};
int main() {
    Calculator C1;
    char rep = 'Y';
    int choice;
    float Num1, Num2;
    cout<<endl<<"CHOICE OF OPERATIONS OF CALCULATOR : "<<endl;
    cout<<endl<<"-> 1. To Add two numbers "<<endl;
    cout<<"-> 2. To Subtract two numbers "<<endl;
    cout<<"-> 3. To Multiply two numbers "<<endl;
    cout<<"-> 4. To Divide two numbers "<<endl;
    do {
        cout<<"\nEnter two numbers : ";
        cin>>Num1>>Num2;

        cout<<"Enter desired choice of operation : ";
        cin>>choice;
        switch(choice) {
        case 1 :cout<<"   ->Sum of "<<Num1<<" and "<<Num2<<" = "<<C1.computeSum(Num1, Num2)<<endl;
                rep = C1.repOperation();
                break;
        case 2 :cout<<"   ->Difference of "<<Num1<<" and "<<Num2<<" = "<<C1.computeSub(Num1, Num2)<<endl;
                rep = C1.repOperation();

                break;
        case 3 :cout<<"   ->Product of "<<Num1<<" and "<<Num2<<" = "<<C1.computeMult(Num1, Num2)<<endl;
                rep = C1.repOperation();

                break;
        case 4 :cout<<"   ->Div of "<<Num1<<" and "<<Num2<<" = "<<C1.computeDiv(Num1, Num2)<<endl;
                rep = C1.repOperation();

                break;
        default:cout<<endl<<"ERROR !! Incorrect Code entered !";
                rep = C1.repOperation();
        }
    }while(rep != 'N');
    cout<<endl<<"Program Exited !!";
    return(0);
}
