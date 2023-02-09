/* **********************************************************************************************************
Lab ID        : 2.6
Program Title : Classes and Objects
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 21-09-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program inputs variables and computes and displays the volume and surface area.
Input         : l, b, h
Output        : vol, sArea
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Box {
private:
    float l, b, h, vol, sArea;
public:
    void setData() {
        cout<<"ENTER DIMENSIONS OF BOX CREATED :\n";
        cout<<endl<<"Enter length : ";
        cin>>l;
        cout<<"Enter breadth : ";
        cin>>b;
        cout<<"Enter height : ";
        cin>>h;
    }
    void getData() {
        cout<<"\nDETAILS YOU ENTERED : ";
        cout<<endl<<"\n ->Length of box entered : "<<l<<endl;
        cout<<" ->Breadth of box entered : "<<b<<endl;
        cout<<" ->Height of box entered : "<<h<<endl;
    }
    float computeVolume() {
        vol = l*b*h;
        return(vol);
    }
    float computeSArea() {
        sArea = (2*l*b + 2*l*h + 2*b*h);
        return(sArea);
    }
};
int main() {
    Box B1;
    B1.setData();
    B1.getData();
    cout<<endl<<"OUTPUT OF REQUIRED ANSWERS :"<<endl;
    cout<<endl<<" ->Volume of the box{cube} entered : "<<B1.computeVolume()<<endl;
    cout<<" ->Surface Area of the box{cube} entered  : "<<B1.computeSArea()<<endl;
    return(0);
}
