/* **********************************************************************************************************
Lab ID        : 7.1
Program Title : Inheritance
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 15-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to Implement Single Inheritance 
********************************************************************************************************** */
#include <iostream>
using namespace std;

class SetDetails {
protected :
    int roll;
    float percentage;
    string name, gender;
public :
    void details(int r, float p, string n, string g) {
        roll = r;
        percentage = p;
        name = n;
        gender = g;
    }
    void display() {
        cout << "Name         : " << name << endl
             << "Roll no.     : " << roll << endl
             << "Gender       : " << gender << endl
             << "Percentage   : " << percentage <<endl;
     }
};
class GetDetails : public SetDetails {

};
int main() {
    GetDetails D1;
    D1.details(56, 95.5, "Haysten", "Male");
    D1.display();
    return(0);
}
