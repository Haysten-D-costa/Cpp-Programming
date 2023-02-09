/* **********************************************************************************************************
Lab ID        : 4.3
Program Title : Constructors and Destructors
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program accepts parameters and computes volume of cylinder and cone.
Input         : -
Output        : -
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
const float pi = 3.14;
using namespace std;

class Solid {
private:
    float Vcone, Vcylinder, radius, height;
public :
   Solid() {
        cout<<"Enter the radius and the height : ";
        cin>>radius>>height;
    }
    Solid(float h, float r=3) {
        radius = r;
        height = h;
    }
    Solid(Solid & z) {
        radius = z.radius;
        height = z.height;
    }
    void computeVol() {
        Vcylinder = pi * radius * radius * height;
        Vcone = (pi * radius * radius * height)/3;
    }
    void display() {
        cout<<" -> Volume of Cone     : "<<Vcone<<endl;
        cout<<" -> Volume of Cylinder : "<<Vcylinder<<endl;
    }
    
};
int main() {
    Solid S1;
    cout<<endl<<"Default Constructor : "<<endl;
    S1.computeVol();
    S1.display();
    Solid S2(9);
    cout<<endl<<"Parameterized Constructor : "<<endl;
    S2.computeVol();
    S2.display();
    Solid S3(S2);
    cout<<endl<<"Copy Constructor(Copied from S2) :"<<endl;
    S3.computeVol();
    S3.display();
    return(0);
}