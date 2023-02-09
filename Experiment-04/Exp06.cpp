/* **********************************************************************************************************
Lab ID        : 4.6
Program Title : Constructors and Destructors
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to implement destructor and constructor
Input         : -
Output        : -
Algorithm     : -
Prerequisites : Basics of C
Known Bugs    : NONE
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Coordinates {
private:
    int x, y;
public :
    Coordinates() {  //CONSTRUCTOR
        x = 10;
        y = 5;
    }
    ~Coordinates() {  //DESTRUCTOR
        cout<<endl<<"Coordinate Object Destroyed !"<<endl;
    }
    void displayCoordinates() {
        
        cout<<endl<<" -> Coordinates : "<<x<<" and "<<y;
    }
    void addScalar() {
        int scalar;
        cout<<endl<<"\nEnter scalar to be added : ";
        cin>>scalar;
        x = x + scalar;
        y = y + scalar;
    }
};
int main() {
    Coordinates C1;
    cout<<"Displaying before adding scalar : ";
    C1.displayCoordinates();
    C1.addScalar();
    cout<<endl<<"Displaying after adding scalar : ";
    C1.displayCoordinates();
    cout<<endl;
    return(0);
}