/* **********************************************************************************************************
Lab ID        : 2.4
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program accepts student details and displays the result
Input         : name, roll, branch, m1, m2, m3
Output        : details, percentage and grade
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
#include<string>
#include"gradeReport.h"
using namespace std;
using namespace gradeReport;

int main() {
    int n, mark1, mark2, mark3, Rollno;
    string Name, Branch;
    Student S[10];
    Marks M[10];
    cout<<"Enter no. of entries : ";
    cin>>n;
    cout<<endl<<"ENTER DETAILS OF STUDENTS : "<<endl;
    for(int i=0; i<n; i++) {
        cout<<endl<<"Enter student '"<<i+1<<"' Details : ";
        cout<<endl<<"Enter Name : ";
        cin>>Name;
        cout<<"Enter Roll number : ";
        cin>>Rollno;
        cout<<"Enter College Branch : ";
        cin>>Branch;
        S[i].setName(Name);
        S[i].setRoll(Rollno);
        S[i].setBranch(Branch);
        cout<<endl<<"Enter the marks in '3' subjects : "<<endl;
        cin>>mark1>>mark2>>mark3;
        M[i].setMark1(mark1);
        M[i].setMark2(mark2);
        M[i].setMark3(mark3);

    }
    cout<<endl<<"REPORT OF STUDENTS ENTERED : "<<endl;
    for(int i=0; i<n; i++) {
        cout<<endl<<"\n\nStudent '"<<i+1<<"'.... "<<endl;
        cout<<"*****************************************"<<endl;
        cout<<"| Name      : "<<S[i].getName()<<endl;
        cout<<"| Roll No.  : "<<S[i].getRoll()<<endl;
        cout<<"| Branch    : "<<S[i].getBranch()<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"| Marks obtained in Sub 1 : "<<M[i].getMark1()<<endl;
        cout<<"| Marks obtained in Sub 2 : "<<M[i].getMark2()<<endl;
        cout<<"| Marks obtained in Sub 3 : "<<M[i].getMark3()<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"| Percentage obtained : "<<M[i].computePercentg()<<endl;
        cout<<"| Grade as per Percentage Obtained : "<<M[i].computeGrade()<<endl;
        cout<<"*****************************************"<<endl;
    }
    cout<<endl;
    return(0);
}
