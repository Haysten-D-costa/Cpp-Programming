/* **********************************************************************************************************
Lab ID        : 2.5
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program accepts and displays contact info(CONTACTS APP)
Input         : phone numbers
Output        : All the phone numbers entered..
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
#include<string>
using namespace std;
class PhoneBook {
private:
    long int number;
    string name;
public:
    void setName( string Name) {
        name = Name;
    }
    void setNumber(long int Num) {
        number = Num;
    }
    string getName() {
        return(name);
    }
    long int getNumber() {
        return(number);
    }
};
int main() {
    int n;
    string Name;
    long int Num;
    PhoneBook Pb[20];
    cout<<"Enter the no. of entries : ";
    cin>>n;
    cout<<endl<<"ENTER DETAILS OF STUDENTS :"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"\nEnter Name : ";
        cin>>Name;
        cout<<"Enter Phone-Number : ";
        cin>>Num;
        Pb[i].setName(Name);
        Pb[i].setNumber(Num);
    }
    cout<<endl<<"\nDISPLAYINNG CONTACT NUMBERS ENTERED : \n"<<endl;
    for(int i=0; i<n; i++) {
        cout<<endl<<"Contact "<<i+1<<endl;
        cout<<" -> Name          : "<<Pb[i].getName()<<endl;
        cout<<" -> Mobile-Number : "<<Pb[i].getNumber()<<endl;
    }
    cout<<endl;
    return(0);
}
