/* **********************************************************************************************************
Lab ID        : 4.4
Program Title : Constructors and Destructors
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to print the details of students by creating a Student class.
Input         : -
Output        : -
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
#include<string>
using namespace std;
class Student {
private:
    string rollno, name, marks;
public :
    Student() {
        name = "N/A";
        rollno = "N/A";
        marks = "N/A";
    }
    Student(string n, string r, string m) {
        rollno = r;
        name = n;
        marks = m;
    }
    Student(Student &z) {
        rollno = z.rollno;
        name = z.name;
        marks = z.marks;
    }
    void display() {
        cout<<"Name     : "<<name<<endl;
        cout<<"Roll no. : "<<rollno<<endl;
        cout<<"Marks    : "<<marks<<endl;
    }
};
int main() {
    string r, m, n;
    char choice;
    cout<<"Do you want to add details of any student ? (Y/N) : ";
    cin>>choice;
    if(choice == 'Y') {
        cout<<"Enter Name : ";
        cin.ignore();
        getline(cin, n);
        cout<<"Enter Roll no. : ";
        cin>>r;
        cout<<"Enter Marks Obtained : ";
        cin>>m;
        Student S2(n, r, m);
        cout<<endl<<"Prameterized Constructor : "<<endl;
        S2.display();
        Student S3(S2);
        cout<<endl<<"Copy Constructor (Copied from S1): "<<endl;
        S3.display();
    }
    else {
        Student S1;
        cout<<endl<<"Default entries using Default Constructor : "<<endl;
        S1.display();
        Student S3(S1);
        cout<<endl<<"Copy Constructor (Copied from above object): "<<endl;
        S3.display();
    }
    return(0);
}