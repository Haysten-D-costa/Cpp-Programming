/* **********************************************************************************************************
Lab ID        : 4.1
Program Title : Constructors and Destructors
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program accepts and computes surface area and volume of each box object (typrs of constructors)
Input         : -
Output        : -
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Box {
private:
    float Sa, V, length, breadth, height;
public :
    Box() {
        cout<<"Enter required dimensions of box :"<<endl;
        cout<<endl<<"Enter length : ";
        cin>>length;
        cout<<"Enter breadth : ";
        cin>>breadth;
        cout<<"Enter height : ";
        cin>>height;
    }
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }
    Box(Box & z) {
        length = z.length;
        breadth = z.breadth;
        height = z.height;
    }
    void compute() {
        Sa = 2*((length*breadth) + (breadth*height) + (length*height));
        V = (length * breadth * height);
    }
    void display() {
        cout<<" -> Surface area of Box : "<<Sa<<endl;
        cout<<" -> Volume of Box : "<<V<<endl;
    }
};
int main() {
    Box B1;
    Box B2(10.5, 27.5, 48);
    Box B3(B2);
    B1.compute();
    cout<<"\nDEFAULT CONSTRUCTOR\n";
    B1.display();
    B2.compute();
    cout<<"\nPARAMETERIZED CONSTRUCTOR\n";
    B2.display();
    B3.compute();
    cout<<"\nCOPY CONSTRUCTOR(Copied from B2*)\n";
    B3.display();
    return(0);
}