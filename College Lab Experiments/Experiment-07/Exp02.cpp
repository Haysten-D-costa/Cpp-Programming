/* **********************************************************************************************************
Lab ID        : 7.2
Program Title : Inheritance
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 15-11-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to Implement Multiple Inheritance 
********************************************************************************************************** */
#include <cstring>
#include <iostream>

using namespace std;

class Dog {
protected :
    string dog = "Labradore";
public :
    void dogSounds() {
        cout << "Dog Barks !! ";
    }
};
class Cat {
protected :
    string cat = "Percian";
public :
    void catSounds() {
        cout << "Cat Mews !! ";
    }
};
class Animals : public Dog, public Cat {};
int main() {
    Animals A1;
    cout << endl << "Dog : "; A1.dogSounds();
    cout << endl << "Cat : "; A1.catSounds();
    return(0);
}
