/* *****************************************************************************************************************
Lab ID        : 1.0 (Projects in C++)
Program Title : Basics to Advance of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C++ Program to implement a college management system.....
Input         : --
Output        : --
Algorithm     : --
Prerequisites : Basics of C and C++
Known Bugs    : 1. While displaying the data of any member, it displays repeated copies
                   of the last member entry...
                2. Exiting pages causes some wrong exit...check later.
***************************************************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int n, choice, count, addCount = 0;;
string encriptPass(); // Funtion to encode the characters while entering the password...

class CollegeDetails { //Main Abstract class...
    protected :
        string id;
        string roll;
        string name;
        string email;
        string branch;
        string department;
        string qualification;
    public : //These function can be defined in own way for students and teachers section... these are pure virtual functions which can be derived by any other class... to reduce redudancy and improve the code...
        virtual void setDetails() = 0;
        virtual void createFile() = 0;
        virtual void searchDetails() = 0;
        virtual void deleteDetails() = 0;
};
class CollegeStudents : public CollegeDetails {  //STUDENTS CLASS **********************************
    void setDetails() {
        // addCount++;
        cin.ignore();
        cout << "\n\t\t\tEnter Name : "; getline(cin, name);
        cout << "\t\t\tEnter Roll Number : "; getline(cin, roll);
        cout << "\t\t\tEnter Email : "; getline(cin, email);
        cout << "\t\t\tEnter Branch : "; getline(cin, branch);
    }
    void createFile() {  //FOR STUDENTS
        ofstream out;
        out.open("Students.txt", ios::app);
        out << name << endl;
        out << roll << endl;
        out << email << endl;
        out << branch << endl;
        out.close();
    }
    void searchDetails() {  //FOR STUDENTS
        ifstream in;
        string searchName, searchRollno, searchBranch, searchEmail;
        string str, str1, str2, str3, str4;
        in.open("Students.txt");
        int count = {};
        cout << "\n\t\t\t1 <- Search student by 'Name'....." << endl
             << "\t\t\t2 <- Search student by 'Roll number'....." << endl
             << "\t\t\t3 <- Search student by 'Email'....." << endl
             << "\t\t\t4 <- Search student by 'Branch'....." << endl
             << "\t\t\t0 <- To return to previous page....." << endl
             << "\n\t\t ..... Enter your choice : "; cin >> choice;
        if(choice == 1) {
            cout << "\n\t\t\tEnter Name of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchName);
            while(!in.eof() && !in.fail()) {          /* MAIN CORRECT CODE, commented to try something diff...below!! */
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                         << "\t\t\tName          : " << setw(35) << str1 << endl
                         << "\t\t\tRoll no       : " << setw(35) << str2 << endl
                         << "\t\t\tCollege Email : " << setw(35) << str3 << endl
                         << "\t\t\tBranch        : " << setw(35) << str4 << endl;
                }
            }
            // while(getline(in, str)) {  /* This doesnt work, but try and check..... creates a problem when using sstream*/
            //     istringstream ss(str);
            //     ss >> str1 >> str2 >> str3 >> str4;
            //     if(searchName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
            //         count++;
            //         cout << "\n\n\t\t\tRequired Details : \n";
            //         cout << "\n"
            //              << "\t\t\tName          : " << setw(35) << str1 << endl
            //              << "\t\t\tRoll no       : " << setw(35) << str2 << endl
            //              << "\t\t\tCollege Email : " << setw(35) << str3 << endl
            //              << "\t\t\tBranch        : " << setw(35) << str4 << endl;
            //     }
            // }




            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 2) {
            cout << "\n\t\t\tEnter Roll Number of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchRollno);
            while(!in.eof() && !in.fail()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchRollno == str2) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                         << "\t\t\tName          : " << setw(35) << str1 << endl
                         << "\t\t\tRoll no       : " << setw(35) << str2 << endl
                         << "\t\t\tCollege Email : " << setw(35) << str3 << endl
                         << "\t\t\tBranch        : " << setw(35) << str4 << endl;
                }
            }
            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 3) {
            cout << "\n\t\t\tEnter Email of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchEmail);
            while(!in.eof() && !in.fail()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchEmail == str3) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                         << "\t\t\tName          : " << setw(35) << str1 << endl
                         << "\t\t\tRoll no       : " << setw(35) << str2 << endl
                         << "\t\t\tCollege Email : " << setw(35) << str3 << endl
                         << "\t\t\tBranch        : " << setw(35) << str4 << endl;
                }
            }
            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 4) {
            cout << "\n\t\t\tEnter Branch of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchBranch);
            for(int i=0; i<countEntries(); i++) { //(countEntries) checks the no. of lines in the Students.txt file, and returns the count when divided by 4(no. of details asked)....to give, total no. of students registered....
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchBranch == str4) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                         << "\t\t\tName          : " << setw(35) << str1 << endl
                         << "\t\t\tRoll no       : " << setw(35) << str2 << endl
                         << "\t\t\tCollege Email : " << setw(35) << str3 << endl
                         << "\t\t\tBranch        : " << setw(35) << str4 << endl;
                }
            }
            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 0) {
            return;
        }
        else {
            cout << endl << "Incorrect Choice Entered ! " << endl; //break;
        }       
                

    }
    void deleteDetails() {
        // addCount--;
        string str, str1, str2, str3, str4;
        
        ifstream in; in.open("Students.txt");
        ofstream out; out.open("TemporaryStudents.txt", ios::app);

        string deleteName, deleteRollno, deleteEmail;
        int count = {};
        cout << "\n\t\t\t1 <- Delete student by 'Name'....." << endl
             << "\t\t\t2 <- Delete student by 'Roll number'....." << endl
             << "\t\t\t3 <- Delete student by 'Email'....." << endl
             << "\t\t\t0 <- To return to previous page....." << endl
             << "\n\t\t .....Enter your choice : "; cin >> choice;
        if(choice == 1) {
            cout << "\n\t\t\tEnter Name of student to be deleted : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, deleteName);
            for(int i=0; i<countEntries(); i++) {   
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(deleteName == str1) { 
                    count++; 
                    continue; 
                }
                else {
                    out << str1 << endl;
                    out << str2 << endl;
                    out << str3 << endl;
                    out << str4 << endl;
                }
            }
            in.close();
            out.close();

            // if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
            ofstream in; in.open("TemporaryStudents.txt");

            ofstream out; out.open("Students.txt"); out.close();   //NEED TO SOLVE THIS MYTH !!! DIDNT DO PROPERLY TRY OTHER LOGIC
            out.open("Students.txt", ios::app);

            for(int i=0; i<countEntries(); i++) {   
                // getline(in, str1);
                // getline(in, str2);
                // getline(in, str3);
                // getline(in, str4);

                cin >> str1;
                cin >> str2;
                cin >> str3;
                cin >> str4;

                out << str1 << endl;
                out << str2 << endl;
                out << str3 << endl;
                out << str4 << endl;
            }
            in.close();
            out.close();
        }
        else if(choice == 2) {
            cout << "\n\t\t\tEnter Roll Number of student to be deleted : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, deleteRollno);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(deleteRollno == str2) { continue; }
                else {
                    out << str1 << endl;
                    out << str2 << endl;
                    out << str3 << endl;
                    out << str4 << endl;
                }
            }
            in.close();
            out.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 3) {
            cout << "\n\t\t\tEnter Email of student to be deleted : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, deleteEmail);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(deleteEmail == str3) { continue; }
                else {
                    out << str1 << endl;
                    out << str2 << endl;
                    out << str3 << endl;
                    out << str4 << endl;
                }
            }
            in.close();
            out.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 0) {
            return;
        }
        else {
            cout << endl << "Incorrect Choice Entered ! " << endl; //break;
        }       
    }
    int countEntries() {
        int countEntries = 0;
        string line;
        ifstream in;
        in.open("Students.txt");
        while(getline(in, line)) { countEntries++; }
        return(countEntries/4);
        // cout << "Count : " << count/4;
    }
};
class CollegeTeachers : public CollegeDetails {  //TEACHERS CLASS ***********************************
    void setDetails() {
        cin.ignore();
        cout << "\n\t\t\tEnter ID : "; getline(cin, id);
        cout << "\t\t\tEnter Name : "; getline(cin, name);
        cout << "\t\t\tEnter Email : "; getline(cin, email);
        cout << "\t\t\tEnter Department : "; getline(cin, department);
        cout << "\t\t\tEnter Qualification : "; getline(cin, qualification);
    }
    void createFile() { //FOR TEACHERS
        ofstream out;
        out.open("Teachers.txt", ios::app);
        out << name << endl
            << id << endl
            << email << endl
            << department << endl
            << qualification << endl;
        out.close();
    }
    void searchDetails() {  //FOR TEACHERS
        ifstream in;
        string searchName, searchID;
        string str1, str2, str3, str4, str5;
        in.open("Teachers.txt");
        int count = {};
        cout << "\n\t\t\t1 <- Search teacher by 'Name'....." << endl
             << "\t\t\t2 <- Search teacher by 'ID'....." << endl
             << "\t\t\t0 <- To return to previous page....." << endl
             << "\n\t...Enter your choice : "; cin >> choice;
        if(choice == 1) {
            cout << "\n\t\t\tEnter Name of teacher to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchName);
            while(!in.eof()) {          /* MAIN CORRECT CODE, commented to try something diff...below!! */
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                getline(in, str5);
                if(searchName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                         << "\t\t\tName          : " << setw(35) << str1 << endl
                         << "\t\t\tID            : " << setw(35) << str2 << endl
                         << "\t\t\tEmail         : " << setw(35) << str3 << endl
                         << "\t\t\tDepartment    : " << setw(35) << str4 << endl
                         << "\t\t\tQualification : " << setw(35) << str5 << endl;
                }
            }
            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 2) {
            cout << "\n\t\t\tEnter Roll Number of teacher to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchID);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                getline(in, str5);
                if(searchID == str2) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                         << "\t\t\tName          : " << setw(35) << str1 << endl
                         << "\t\t\tID            : " << setw(35) << str2 << endl
                         << "\t\t\tEmail         : " << setw(35) << str3 << endl
                         << "\t\t\tDepartment    : " << setw(35) << str4 << endl
                         << "\t\t\tQualification : " << setw(35) << str5 << endl;
                }
            }
            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        } else if(choice == 0) {
            return;
        }
        else {
            cout << endl << "Incorrect Choice Entered ! " << endl; //break;
        }       
                

    }
    void deleteDetails() {

        ifstream in; in.open("Teachers.txt");
        ofstream out; out.open("TemporaryTeachers.txt", ios::app);

        string str, str1, str2, str3, str4, str5;
        string deleteName, deleteID, deleteEmail;
        int count = {};
        cout << "\n\t\t\t1 <- Delete teacher by 'Name'....." << endl
             << "\t\t\t2 <- Delete teacher by 'ID'....." << endl
             << "\t\t\t3 <- Delete teacher by 'Email'....." << endl
             << "\t\t\t0 <- To return to previous page....." << endl
             << "\n\t\t .....Enter your choice : "; cin >> choice;
        if(choice == 1) {
            cout << "\n\t\t\tEnter Name of teacher entry to be deleted : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, deleteName);
            while(!in.eof()) {          /* MAIN CORRECT CODE, commented to try something diff...below!! */
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                getline(in, str5);
                if(deleteName == str1) { continue; }
                else {
                    out << str1 << endl;
                    out << str2 << endl;
                    out << str3 << endl;
                    out << str4 << endl;
                    out << str5 << endl;
                }
            }
            in.close();
            out.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 2) {
            cout << "\n\t\t\tEnter ID of teacher entry to be deleted : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, deleteID);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                getline(in, str5);
                if(deleteID == str2) { continue; }
                else {
                    out << str1 << endl;
                    out << str2 << endl;
                    out << str3 << endl;
                    out << str4 << endl;
                    out << str5 << endl;
                }
            }
            in.close();
            out.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 3) {
            cout << "\n\t\t\tEnter Email of teacher entry to be deleted : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, deleteEmail);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                getline(in, str5);
                if(deleteEmail == str3) { continue; }
                else {
                    out << str1 << endl;
                    out << str2 << endl;
                    out << str3 << endl;
                    out << str4 << endl;
                    out << str5 << endl;
                }
            }
            in.close();
            out.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 0) {
            return;
        }
        else {
            cout << endl << "Incorrect Choice Entered ! " << endl; //break;
        }       
    }
};
class DataBase : public CollegeStudents, public CollegeTeachers {  //DATABASE CLASS (MAINNNNNNN)....
    private :
        string password;
        static int visited;
    public :
        DataBase() { }
        DataBase(string password) { this-> password = password; }
        void mainPage();
        void loginPage();
        void resetPass();
        void externalPage();

        void personalInfoPage() {
            printHeader();
            ifstream in;
            string content;
            in.open("PersonalDetails.txt");
            if(in.eof() == 0) {
                getline(in, content, '$');
                cout << content;
            }
            in.close();
            cout << "\n\n\t\t\t\t\t\t\t      "; system("pause");
        }
        void printHeader() {
            cout << "\n\n\n\t\t-------------------------------------------------------------------------------------" << endl
                 << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<| COLLEGE MANAGEMENT SYSTEM |>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl
                 << "\t\t-------------------------------------------------------------------------------------" << endl
                 << "\t\t\t\t\t\t\t\t\t    Creator : Haysten_D_Costa\n"
                 << "\t\t\t\t\t\t\t\t\t\t\t       21co56\n";
        }
};
int DataBase :: visited = 0;
void DataBase :: externalPage() {  //DEFAULT PAGE

    //SETTING PASSWORD........
    cout << "\n\t\t\tSetting up the system for you...";

    int choice;
    do {
        system("cls");
        printHeader();
        cout << "\n\t\t\t1 <- To Enter Login Page....." << endl
             << "\t\t\t2 <- To know more about program....." << endl
             << "\t\t\t0 <- To Exit program....." << endl
             << "\n\t\t ..... Enter your choice : "; cin >> choice;
        switch(choice) {
            case 1 :loginPage();
                    break;
            case 2 :system("cls");
                    personalInfoPage();
                    break;
            // case 3 :system("cls");
            //         resetPass();
            case 0 :system("cls");
                    printHeader();
                    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        .....THANK YOU !.....\n\n\n\n\n";
                    exit(1);
                    break;
            default:cout << endl << "Incorrect Choice Entered ! " << endl; 
        }
     } while(choice != 0);
}
void DataBase::loginPage() {  //TO SIGN IN TO THE SYSTEM
    system("cls");
    printHeader();
    string pass;
    int ch;
    cout << "\n\t\t\t..... Enter Password : "; pass = encriptPass();
    if(pass == "User123") {
        int credDOB, credOTP;
        cout << "\n\n\n\t\t\t\t\t\t ...WELCOME BOSS !... \n\t\t\t";
        cout << "\n\t\t...Please verify yourself !...\n"
             << "\n\t\t\t\tEnter Security Credentials : ";
        cin >> credDOB >> credOTP;
        if((credDOB == 1111) && (credOTP == 2222)) { 
            cout << "\t\t\t\tGranted security access..." 
                 << "\n\t\t\t\tDo you wish to check set password ?   ";
            string c;
            cin >> c;
            if((c == "yes")||(c == "Yes")||(c == "YES")||(c == "y")||(c == "Y")||(c == "sure")||(c == "SURE")) {
                cout << "\n\t\t\t\t\tSet Password is : " << password;
            }
            

        }
        else { 
            cout << "\n\n\t\t\t\tDenied Access :: SYSTEM LOCKED ::"; 
            exit(1);
        }
        cout << "\n\n\n\t\t\t\t   .....Using Emergency Password ! \n\t\t\t\t\t    ";
        system("pause");
        system ("cls");
    }
    else if(pass == password) {
        cout << "\n\n\n\t\t\tAccess Granted ! \n\t\t\t";
        system("pause");
        system ("cls");
    }
    else {
        static int count = {};
        count ++;
        cout << "\tAttempt..." << count ;
        cout << "\n\n\n\t\t\tAccess Denied ! . . . \n\t\t\t";
        if((count%5) == 0) {
            // count = 0;
            for(int i=15; i>=0; i--) {
                system("cls");
                printHeader();
                cout << "\n\n\t\t\tTry Again after : " << i <<"s . . .\n\t\t\t";
                Sleep(1000);
            }
        }
        system("pause");
        system("cls");
        loginPage();
    }
    mainPage();
}
// void DataBase::resetPass() {
//     printHeader();
//     string confirm;
//     cout << "Do you wish to reset the password ? [Y/N] : ";
//     cin >> confirm;
//     if((confirm == "Y") || (confirm == "y")) {
//         cout << "\n\t\t\tEnter your previous password : ";
//         cin >> confirm;
//         if(confirm == password) {
//             while(confirm != "CONFIRM") {
//                 cout << "\n\t\t\t\tPlease type 'CONFIRM', to proceed : ";
//                 cin >> confirm;
//             }
//             cout <<"\n\t\t\tEnter new password : ";
//             cin >> password;
//             DataBase D(password);
//             externalPage();
//         }
//         else {
//             cout << "\n\t\t\tIncorrect password Entered !";
//         }
//     }
//     else {
//         externalPage();
//     }
// }
void DataBase::mainPage()  {  //MAIN REGISTRATION FUNCTION
    int choice;
    do {
        system("cls");
        printHeader();
        cout << endl << "\t\t\t1 -> Students Section....." << endl
             << "\t\t\t2 -> Teachers Section....." << endl
             << "\t\t\t0 -> Log Out....." << endl
             << "\n\t\t ..... Enter your choice : "; cin >> choice;
        switch(choice) {
            case 1 : {
                do {
                    system("cls");
                    printHeader();
                    CollegeStudents s;
                    CollegeDetails *p = &s;
                    cout << "\n\t\t\t1 -> Register New Student....." << endl
                         << "\t\t\t2 -> Search For Student..... " << endl
                         << "\t\t\t3 -> Delete Student Entry..... " << endl
                         << "\t\t\t0 -> Exit Page....." << endl
                         << "\n\t\t   .....Enter your choice : "; cin >> choice;
                    switch(choice) {
                        case 1 :cout << "\t\t\t";
                                system("pause");
                                system("cls");
                                printHeader();
                                cout << "\n\t\t\tEnter no. of Entries : "; cin >> n;
                                for(int i=0; i<n; i++) {

                                    p-> setDetails();
                                    p-> createFile();
                                }
                                cout << "\n\t\t\t";
                                cout << "[[[]]] : " << addCount;
                                system("pause");
                                break;
                        case 2 :
                                system("cls");
                                p-> searchDetails(); cout << "\n\n\t\t\t\t\t\t\t\t";
                                system("pause");
                                break;
                        case 3 : 
                                system("cls");
                                p-> deleteDetails(); cout << "\n\n\t\t\t\t\t\t\t\t";
                                cout << "[[[]]] : " << addCount;
                                system("pause");
                                break;
                        case 0 :loginPage(); break;
                        default:cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                                cout << "\n\t\t\t";
                                system("pause"); 
                    }
                }while(choice != 0);

            } break;
            case 2 : {
                do {
                    system("cls");
                    printHeader();
                    CollegeTeachers t;
                    CollegeDetails *p = &t;
                    cout << "\n\t\t\t1 -> Register New Teacher....." << endl
                         << "\t\t\t2 -> Search For Teacher..... " << endl
                         << "\t\t\t0 -> Exit Page....." << endl
                         << "\n\t...Enter your choice : "; cin >> choice;
                    switch(choice) {
                        case 1 :
                            cout << "\n\t\t\t";
                            system("pause");
                            system("cls");
                            printHeader();
                            cout << "\n\t\t\tEnter no. of Entries : "; cin >> n;
                            for(int i=0; i<n; i++) {
                                p-> setDetails();
                                p-> createFile();
                            }
                            cout << "\n\t\t\t"; system("pause");
                            break;
                        case 2 :
                                system("cls");
                                printHeader();
                                p-> searchDetails(); cout << "\n\n\t\t\t\t\t\t\t\t";
                                system("pause");
                                break;
                        case 0 :loginPage(); break;
                        default:cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                                cout << "\n\t\t\t";
                                system("pause");
                    }
                } while(choice != 0);
            } break;
            case 0 :break;
            default:cout << "\n\t\t\t    Incorrect Choice Entered !.....\t\t\t " << endl;
                    cout << "\n\t\t\t";
                    system("pause"); 
        }
    }while(choice != 0);
}

int main()
{
    int ch;
    string p, password, confirm;
    system("cls");
    cout << "\n\n\n\t\t-------------------------------------------------------------------------------------" << endl
         << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<| COLLEGE MANAGEMENT SYSTEM |>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl
         << "\t\t-------------------------------------------------------------------------------------" << endl
         << "\t\t\t\t\t\t\t\t\t    Creator : Haysten_D_Costa\n"
         << "\t\t\t\t\t\t\t\t\t\t\t       21co56\n"
         << "\n\t\t\t\t.................>>>>> WELCOME <<<<<.................\t\n";
    cout << "\n\t\t\t\t\t  Setting up the system for you !\n";
    
    cout << "\n\n\n\t\t\tSet up a strong password : "; ch=getch();
    while(ch != 13) {
        p.push_back(ch);
        cout << '*';
        ch = getch();
    }
    cout << "\n\t\t\tRe-Enter the same password : "; confirm = encriptPass();

    if(confirm == p) { 
        cout << "\n\n\t\t\t\tPassword successfully set !"; 
        password = p;
    }
    else { 
        cout << "\n\n\t\t\t\tPasswords dont match !";
        cout << "\n\t\t\t\t   Try Again !!.....";
        cout << "\n\t\t\t\t\t  "; system("pause");
        static int count = {};
        count ++;
        if((count%5) == 0) {
            // count = 0;
            for(int i=15; i>=0; i--) {
                system("cls");
                cout << "\n\n\n\t\t-------------------------------------------------------------------------------------" << endl
                     << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<| COLLEGE MANAGEMENT SYSTEM |>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl
                     << "\t\t-------------------------------------------------------------------------------------" << endl
                     << "\t\t\t\t\t\t\t\t\t    Creator : Haysten_D_Costa\n"
                     << "\t\t\t\t\t\t\t\t\t\t\t       21co56\n"
                     << "\n\t\t\t\t.................>>>>> WELCOME <<<<<.................\t\n";
                cout << "\n\n\t\t\tTry Again after : " << i <<"s . . .\n\t\t\t";
                Sleep(1000);
            }
        }
        main();
    }
    cout << "\n\t\t\t\t\t  "; system("pause");
    DataBase D(password);
    D.externalPage();

    return(0);
}
string encriptPass() {  // A simple call/pass by value function to encript characters during entering password...
     int ch;
     string password;
     ch = getch();
     while(ch != 13) {
          password.push_back(ch);
          cout << '*';
          ch = getch();
    }
    return(password);
}
