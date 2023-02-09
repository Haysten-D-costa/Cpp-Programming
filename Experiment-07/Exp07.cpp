/* **********************************************************************************************************
Lab ID        : 7.7
Program Title : Inheritance
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 15-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to Inherit Omnivore from Carnivore and Herbivore 
********************************************************************************************************** */
#include <iostream>
using namespace std;

class Herbivore {
protected :
    string foodType;
public :
    void setH(string ft) {
        foodType = ft;
    } 
    void getH() {
        cout << "Food Type    : " << foodType << endl;
    }
};
class Carnivore {
protected :
    string foodType;
public :
    void setC(string ft) {
        foodType = ft;
    } 
    void getC() {
        cout << "Food Type    : " << foodType << endl;
    }
};
class Omnivore : public Herbivore, public Carnivore { };

int main() {
    Omnivore O1;
    cout <<"Omnivore Animals Food type : " << endl;
    O1.setH("Plants");
    O1.setC("Meat");
    O1.getH();
    O1.getC();
    return(0);
}