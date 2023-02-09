/* **********************************************************************************************************
Lab ID        : 7.4
Program Title : Inheritance
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 15-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to Hierarchical Inheritance 
********************************************************************************************************** */
#include <cstring>
#include <iostream>

using namespace std;

class Parts {
protected :
    string tyres;
    string colour;
public :
    void setData(string t, string c) {
        tyres = t;
        colour = c;
    }
    inline void getData() {
        cout << " -> Tyre Types : " << tyres << endl
             << " -> Colour     : " << colour << endl;
    }
};
class TwoWheeler : public Parts {
protected :
    int noWheelsT;
    int noPasangersT;
public :
    TwoWheeler(int nw, int np) {
        noWheelsT = nw;
        noPasangersT = np;
    }
    inline void getTwData() {
        cout << " -> No. of Wheels    : " << noWheelsT << endl
             << " -> No. of Pasangers : " << noPasangersT << endl << endl;
    }
};
class FourWheeler : public Parts {
protected :
    int noWheelsF;
    int noPasangersF;
public :
    FourWheeler(int nw, int np) {
        noWheelsF = nw;
        noPasangersF = np;
    }
    inline void getFwData() {
        cout << " -> No. of Wheels    : " << noWheelsF << endl
             << " -> No. of Pasangers : " << noPasangersF << endl << endl;
    }
};
int main() {
    TwoWheeler Bike01(2, 2);
    FourWheeler Car01(4, 5);
    Bike01.setData("Plastic", "Black");
    cout << "Bike Details : " << endl;
    Bike01.getData();
    Bike01.getTwData();
    Car01.setData("TVS", "Yellow");
    cout << "Car Details : " << endl;
    Car01.getData();
    Car01.getFwData();

    return(0);
}