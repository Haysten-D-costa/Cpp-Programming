/* **********************************************************************************************************
Lab ID        : 5.1
Program Title : Operator Overloading
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : -10-2022
Description   : Program to overload ++ operator using member functions
********************************************************************************************************** */
#include<iostream>
using namespace std;
class Weight {
private:
    int kg;
public :
    Weight() {  //IN CASE USER DOESN'T PROVIDE VALUES
        kg = 0;
    }
    Weight(int x) {  //TO PASS VALUES TO BE INCREMENTED
        kg = x;
    }
    void printWeight() {  //TO PRINT RESULT
        cout<<"Weight = "<<kg<<endl;
    }
    void operator ++( ) {  //FOR PRE-INCREMENT 
        ++kg;
    }
    void operator ++(int ) {  //FOR POST-INCREMENT
        kg++;
    }
};
int main() {
    Weight S1(10);
    Weight S2(20);
    cout<<"Original Passed Values(Before incrementing) : "<<endl;
    S1.printWeight();
    S2.printWeight();
    cout<<endl;
    ++S1;
    cout<<"Incremented Values : "<<endl;
    S1.printWeight();
    S2++;
    S2.printWeight();
    return(0);
}
