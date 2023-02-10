#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int n;

class CollegeDetails { //Main Abstract class...
    protected :
        string id;
        string roll;
        string name;
        string email;
        string branch;
        string department;
        string qualification;
    public :
        virtual void createFile() = 0;
        virtual void searchDetails() = 0;
        virtual void setDetails() = 0;  //This function can be defined in own way for students and teachers section...
};


class CollegeStudents : public CollegeDetails {  //STUDENTS CLASS **********************************
    void setDetails() {
        cin.ignore();
        cout << "\n\t\t\tEnter Name : "; cin >> name;
        cout << "\t\t\tEnter Roll Number : "; cin >> roll;
        cout << "\t\t\tEnter College Email : "; cin >> email;
        cout << "\t\t\tEnter Branch : "; cin >> branch;
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
        string searchsName;
        cout << "\n\t\t\tEnter Name of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
        getline(cin, searchsName);

        in.open("Students.txt");
        int count = {};
        string str1, str2, str3, str4;
        while(!in.eof() && !in.fail()) {
            in >> str1;
            in >> str2;
            in >> str3;
            in >> str4;
            if(searchsName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                count++;
                cout << "\n\n\t\t\tRequired Details : \n";
                cout << "\n"
                    << "\t\t\tName          : " << setw(25) << str1 << endl
                    << "\t\t\tRoll no       : " << setw(25) << str2 << endl
                    << "\t\t\tBranch        : " << setw(25) << str3 << endl
                    << "\t\t\tCollege Email : " << setw(25) << str4 << endl;
            }
        }
        in.close();
        if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
    }
};
class CollegeTeachers : public CollegeDetails {  //TEACHERS CLASS ***********************************
    void setDetails() {
        cin.ignore();
        cout << "\t\t\tEnter ID : "; cin >> id;
        cout << "\n\t\t\tEnter Name : "; cin >> name;
        cout << "\t\t\tEnter Email : "; cin >> email;
        cout << "\t\t\tEnter Department : "; cin >> department;
        cout << "\t\t\tEnter Qualification : "; cin >> qualification;
    }
    void createFile() { //FOR TEACHERS
        ofstream out;
        out.open("Teachers.txt", ios::app);
        out << id << endl
            << name << endl
            << email << endl
            << department << endl
            << qualification << endl;
        out.close();
    }
    void searchDetails() {  //FOR TEACHERS
        ifstream in;
        string searchsName;
        cout << "\n\t\t\tEnter Name of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
        getline(cin, searchsName);

        in.open("Teachers.txt");
        int count = {};
        string str1, str2, str3, str4;
        while(!in.eof() && !in.fail()) {
            in >> str1;
            in >> str2;
            in >> str3;
            in >> str4;
            if(searchsName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                count++;
                cout << "\n\n\t\t\tRequired Details : \n";
                cout << "\n"
                    << "\t\t\tName          : " << setw(25) << str1 << endl
                    << "\t\t\tRoll no       : " << setw(25) << str2 << endl
                    << "\t\t\tBranch        : " << setw(25) << str3 << endl
                    << "\t\t\tCollege Email : " << setw(25) << str4 << endl;
            }
        }
        in.close();
        if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
    }
};
class DataBase : public CollegeStudents, public CollegeTeachers {  //DATABASE CLASS (MAINNNNNNN)....
    private :
        string password;
        static int visited;
    public :
        DataBase() { password = "User123"; }
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
    cout << "\n\t\t\t..... Enter Password : "; ch=getch();
    while(ch != 13) {
        pass.push_back(ch);
        cout << '*';
        ch = getch();
    }
    if(pass == password) {
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
    system("cls");
    printHeader();
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
                                system("pause");
                                break;
                        case 2 :
                                system("cls");
                                // CollegeStudents s1;
                                // s1.
                                p-> searchDetails(); cout << "\n\n\t\t\t";
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
                         << "\n\t\t ..... Enter your choice : "; cin >> choice;
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
                                p-> searchDetails(); cout << "\n\n\t";
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
    cout << "\n\n\t\t\t\t\t  Setting up the system for you !\n";
    // cout << "\n\t\t\t\t"; system("pause"); system("cls");
    // cout << "\n\n\n\t\t-------------------------------------------------------------------------------------" << endl
    //      << "\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<| COLLEGE MANAGEMENT SYSTEM |>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl
    //      << "\t\t-------------------------------------------------------------------------------------" << endl
    //      << "\t\t\t\t\t\t\t\t\t    Creator : Haysten_D_Costa\n"
    //      << "\t\t\t\t\t\t\t\t\t\t\t       21co56\n"
    //      << "\n\t\t\t\t.................>>>>> WELCOME <<<<<.................\t\n";

    cout << "\n\n\n\t\t\tSet up a strong password : "; ch=getch();
    while(ch != 13) {
        p.push_back(ch);
        cout << '*';
        ch = getch();
    }
    cout << "\n\t\t\tRe-Enter the same password : ";ch=getch();
    while(ch != 13) {
        confirm.push_back(ch);
        cout << '*';
        ch = getch();
    }
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
