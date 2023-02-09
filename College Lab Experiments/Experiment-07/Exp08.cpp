#include <cstring>
#include <iostream>

using namespace std;

class Person {
protected :
    int height;
    char gender;
    string name;
    string mstatus;
public :
    void setDetails() {
        cout << "Enter Name    : "; cin >> name ;
        cout << "Enter Height  : "; cin >> height ;
        cout << "Enter Gender  : "; cin >> gender ;
        cout << "Enter MStatus : "; cin >> mstatus ;
    }
    void getDetails() {
        cout << "*****************************" << endl
             << "Name       : " << name << endl
             << "Height     : " << height << endl
             << "Gender     : " << gender << endl
             << "MStatus    : " << mstatus << endl;
    }
};
class Doctor : public Person {
protected :
    string occupation;
public :
    void setD(string oc) {
        occupation = oc;
    }
    void getD() {
        cout << "Occupation : " << occupation << endl;
        cout << "*****************************" << endl;
    }
};
class Engineer : public Person {
protected :
    string occupation;
public :
    void setE(string oc) {
        occupation = oc;
    }
    void getE() {
        cout << "Occupation : " << occupation << endl;
        cout << "*****************************" << endl;
    }
};
class Artist : public Person {
protected :
    string occupation;
public :
    void setA(string oc) {
        occupation = oc;
    }
    void getA() {
        cout << "Occupation : " << occupation << endl;
        cout << "*****************************" << endl;
    }
};
class SpecialistDoc : public Doctor {
protected :
    string speciality;
    string degree;
public :
    void setSD(string sp, string dg) {
        speciality = sp;
        degree = dg;
    }
    void getSD() {
        cout << "Field of Experty : " << speciality << endl;
        cout << "Degree           : " << degree << endl;
        cout << "*****************************" << endl;
    }
};
int main() {
    cout << endl << "Doctor Details : " << endl;
    Doctor D;
    D.setDetails();
    D.setD("DOCTOR");
    cout << endl << "Engineer Details : " << endl;
    Engineer E;
    E.setDetails();
    E.setE("ENGINEER");
    cout << endl << "Artist Details : " << endl;
    Artist A;
    A.setDetails();
    A.setA("ARTIST");
    cout << endl << "Specialist Doctor Details : " << endl;
    SpecialistDoc SD;
    SD.setDetails();
    SD.setSD("Heart", "MBBS");
    cout << "Printing Details : " << endl;
    cout << endl << "Doctor...." << endl;
    D.getDetails();
    D.getD();
    cout << endl << "Engineer...." << endl;
    E.getDetails();
    E.getE();
    cout << endl << "Artist...." << endl;
    A.getDetails();
    A.getA();
    cout << endl << "Specialist Doctor...." << endl;
    SD.getDetails();
    SD.getSD();
    return(0);
}

