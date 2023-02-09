/* **********************************************************************************************************
Lab ID        : 4.2
Program Title : Constructors and Destructors
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program accepts and displayd the date.
Input         : -
Output        : -
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
    Date() {  //DEFAULT CONSTRUCTOR
        day = 24;
        month = 01;
        year = 2003;
    }
    Date(int dy, int mn, int yr) {  //PARAMETERIZED CONSTRUCTOR
        day = dy;
        month = mn;
        year = yr;
    }
    Date(Date & Z) {  //COPY CONDTRUCTOR
        day = Z.day;
        month = Z.month;
        year = Z.year;
    }
    void display() {
        cout<<endl<<"   -> Date : "<<day<<" - "<<month<<" - "<<year<<endl;
    }
};
int main() {
    int d, m, y;
    cout<<"Enter the day : ";
    cin>>d;
    cout<<"Enter the month : ";
    cin>>m;
    cout<<"Enter the year : ";
    cin>>y;
    Date D1;
    cout<<endl<<"DATES (Using all constructors) : "<<endl;
    cout<<endl<<"1. Date with 'Default constructor' : ";
    D1.display();
    Date D2(d, m, y);
    cout<<endl<<"2. Date with 'Parameterized constructor' : ";
    D2.display();
    Date D3(D2);  //TO COPY DATA FROM D2
    cout<<endl<<"3. Date with 'Copy constructor' : ";
    D3.display();
    return(0);
}