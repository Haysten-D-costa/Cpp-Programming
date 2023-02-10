#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <sstream>

using namespace std;

int n, choice;

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
            while(!in.eof()) {          /* MAIN CORRECT CODE, commented to try something diff...below!! */
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                         << "\t\t\tName          : " << setw(25) << str1 << endl
                         << "\t\t\tRoll no       : " << setw(25) << str2 << endl
                         << "\t\t\tCollege Email : " << setw(25) << str3 << endl
                         << "\t\t\tBranch        : " << setw(25) << str4 << endl;
                }
            }
            // while(getline(in, str)) {  /* This doesnt work, but try and check..... creates a problem when using sstream*/
            //     istringstream ss(str);
            //     ss >> str1 >> str2 >> str3 >> str4;
            //     if(searchName == str1) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
            //         count++;
            //         cout << "\n\n\t\t\tRequired Details : \n";
            //         cout << "\n"
            //              << "\t\t\tName          : " << setw(25) << str1 << endl
            //              << "\t\t\tRoll no       : " << setw(25) << str2 << endl
            //              << "\t\t\tCollege Email : " << setw(25) << str3 << endl
            //              << "\t\t\tBranch        : " << setw(25) << str4 << endl;
            //     }
            // }




            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 2) {
            cout << "\n\t\t\tEnter Roll Number of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchRollno);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchRollno == str2) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                            << "\t\t\tName          : " << setw(25) << str1 << endl
                            << "\t\t\tRoll no       : " << setw(25) << str2 << endl
                            << "\t\t\tCollege Email : " << setw(25) << str3 << endl
                            << "\t\t\tBranch        : " << setw(25) << str4 << endl;
                }
            }
            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 3) {
            cout << "\n\t\t\tEnter Email of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchEmail);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchEmail == str3) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                            << "\t\t\tName          : " << setw(25) << str1 << endl
                            << "\t\t\tRoll no       : " << setw(25) << str2 << endl
                            << "\t\t\tCollege Email : " << setw(25) << str3 << endl
                            << "\t\t\tBranch        : " << setw(25) << str4 << endl;
                }
            }
            in.close();
            if(count == 0) { cout << "\n\t\t\tNo such Entries found !\n"; }
        }
        else if(choice == 4) {
            cout << "\n\t\t\tEnter Branch of student to be searched : "; cin.ignore();  //FLUSHING STREAM...
            getline(cin, searchBranch);
            while(!in.eof()) {
                getline(in, str1);
                getline(in, str2);
                getline(in, str3);
                getline(in, str4);
                if(searchBranch == str4) {  //CHECKS IF ENTERED NAME MATCHES THE NAMES IN FILE...
                    count++;
                    if(count < 2) { cout << "\n\n\t\t\tRequired Details : \n"; }
                    cout << "\n"
                            << "\t\t\tName          : " << setw(25) << str1 << endl
                            << "\t\t\tRoll no       : " << setw(25) << str2 << endl
                            << "\t\t\tCollege Email : " << setw(25) << str3 << endl
                            << "\t\t\tBranch        : " << setw(25) << str4 << endl;
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
};
class CollegeTeachers : public CollegeDetails {  //TEACHERS CLASS ***********************************
    void setDetails() {
        cin.ignore();
        cout << "\t\t\tEnter ID : "; getline(cin, id);
        cout << "\n\t\t\tEnter Name : "; getline(cin, name);
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
             << "\n\t\t ..... Enter your choice : "; cin >> choice;
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
                    cout << "\n\n\t\t\tRequired Details : \n";
                    cout << "\n"
                                 << "\t\t\tName          : " << setw(25) << str1 << endl
                                 << "\t\t\tID            : " << setw(25) << str2 << endl
                                 << "\t\t\tEmail         : " << setw(25) << str3 << endl
                                 << "\t\t\tDepartment    : " << setw(25) << str4 << endl
                                 << "\t\t\tQualification : " << setw(25) << str5 << endl;
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
                    cout << "\n\n\t\t\tRequired Details : \n";
                    cout << "\n"
                                 << "\t\t\tName          : " << setw(25) << str1 << endl
                                 << "\t\t\tID            : " << setw(25) << str2 << endl
                                 << "\t\t\tEmail         : " << setw(25) << str3 << endl
                                 << "\t\t\tDepartment    : " << setw(25) << str4 << endl
                                 << "\t\t\tQualification : " << setw(25) << str5 << endl;
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
    cout << "\n\t\t\t..... Enter Password : "; ch=getch();
    while(ch != 13) {
        pass.push_back(ch);
        cout << '*';
        ch = getch();
    }
    if(pass == "User123") {
        cout << "\n\n\n\t\t\t\t\t\t ...WELCOME BOSS !... \n\t\t\t";
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
    cout << "\n\t\t\t\t\t  Setting up the system for you !\n";
    
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
