/* **********************************************************************************************************
Lab ID        : 2.3
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program sets date as per users input and displays
Input         : day, month, year
Output        : day - month - year
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Date {
private:
    int day, month, year;
public :
    void setDate() {
        cout<<"Enter full date in [DD MM YYYY] format : ";
        cin>>day>>month>>year;
    }
    void getDate() {
        cout<<endl<<"Date entered is : "<<day<<" - "<<month<<" - "<<year;
    }
};
int main() {
    Date D1;
    D1.setDate();
    D1.getDate();
    cout<<endl;
    return(0);
}
