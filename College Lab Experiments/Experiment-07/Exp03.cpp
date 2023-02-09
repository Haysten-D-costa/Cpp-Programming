/* **********************************************************************************************************
Lab ID        : 7.3
Program Title : Inheritance
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 15-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to Implement Multilevel Inheritance 
********************************************************************************************************** */
#include <iostream>
using namespace std;

class GrandParents {
protected :
    string hairColour;
    string eyeColour;
public :
    void SetGPdetails(string hc, string ec) {
        hairColour = hc;
        eyeColour = ec;
    }
    void getGP() {
        cout << " -> Hair Colour : " << hairColour << endl
             << " -> Eye Colour  : " << eyeColour <<endl ;
    }
};
class Parents : public GrandParents {
protected :
    float height;
    float weight;
public :
    void SetPdetails(float h, float w) {
        height = h;
        weight = w;
    }
    void getP() {
        cout << " -> Height      : " << height << endl
             << " -> Weight      : " << weight << endl ;
    }
};
class Children : public Parents {
protected :
    string character;
    string personality;
public :
    void SetCdetails(string ch, string pr) {
        character = ch;
        personality = pr;
    }
    void getC() {
        cout << " -> Character   : " << character << endl
             << " -> Personality : " << personality << endl ;
    }
};
int main() {
    Children C1;
    C1.SetGPdetails("Brown", "Blue");
    C1.SetPdetails(160, 50);
    C1.SetCdetails("Caring", "Good");
    cout << "Child Inherited Traits :\n" << endl;
    C1.getGP();
    C1.getP();
    C1.getC();
    return(0);
}