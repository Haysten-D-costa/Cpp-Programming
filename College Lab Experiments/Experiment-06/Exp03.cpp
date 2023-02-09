/* **********************************************************************************************************
Lab ID        : 6.3
Program Title : Strings and Arrays
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to a) To concatenate two strings
                           b) To find a substring
                           c) To split a string
                           d) To convert string to lowercase and vice versa
********************************************************************************************************** */
#include<iostream>
#include<string>
using namespace std;
int main() {
    int choice, pos;
    string S1, S2, S3;
    while(1) {
        cout<<endl<<"\n1 -> To Concatinate two strings "<<endl
            <<"2 -> To Find a sub-string"<<endl
            <<"3 -> To Split a string"<<endl
            <<"4 -> To Convert case of a string"<<endl
            <<"0 -> To Exit program"<<endl;
        cout<<endl<<"Enter required choice : ";
        cin>>choice;
        //system("cls");
        switch(choice) {
            case 1 :cout<<"CONCATINATION OF TWO STRINGS :"<<endl;
                    cout<<endl<<"Enter the first string : ";
                    cin.ignore();
                    getline(cin, S1);
                    cout<<"Enter the second string : ";
                    cin.ignore();
                    getline(cin, S2);
                    S3 = S1 + S2;
                    cout<<endl<<"Concatinated string : "<<S3;
                    break;
            case 2 :cout<<"FINDING SUBSTRINGS IN A STRING : "<<endl;
                    cout<<endl<<"Enter the string1 : ";
                    cin.ignore();
                    getline(cin, S1);
                    cout<<"Enter string to be found in string1 : ";
                    getline(cin, S2);
                    pos = S1.find(S2, 0);
                    if(pos != -1) {
                        cout<<endl<<"String "<<S2<<" Found ! At location "<<pos+1<<endl;
                    }else {
                        cout<<endl<<"Sub-String "<<S2<<" not found !!";
                    }
                    break;
            case 3 :cout<<"SPLITTING A STRING"<<endl;
                    S2 = " ";
                    cout<<"Enter a string : ";
                    cin.ignore();
                    getline(cin, S1);
                    cout<<"Enter the position to split the string : ";
                    cin>>pos;
                    S1.insert(pos, S2);
                    cout<<endl<<"Splitted string : "<<S1;
                    break;
            case 4 :cout<<"CONVERTING CASE OF STRING"<<endl;
                    int choiceC;
                    cout<<endl<<"1 -> Convert Lower to Upper case"<<endl
                        <<"2 -> Convert Upper to Lower case"<<endl
                        <<endl<<"Enter your choice : ";
                    cin>>choiceC;
                    //system("cls");
                    switch(choiceC) {
                        case 1 :cout<<endl<<"Enter a string : ";
                                cin.ignore();
                                getline(cin, S1);
                                cout<<endl<<"Upper Case String : ";
                                for(int i=0; i<S1.size(); i++) {
                                    if(S1[i] == 32) {
                                        cout<<" ";
                                    }else {
                                        int x = S1[i];
                                        x -= 32;
                                        char y = x;
                                        cout<<y;
                                    }
                                }
                                break;
                        case 2 :cout<<endl<<"Enter a string : ";
                                cin.ignore();
                                getline(cin, S1);
                                cout<<endl<<"Lower Case String : ";
                                for(int i=0; i<S1.size(); i++) {
                                    if(S1[i] == 32) {
                                        cout<<" ";
                                    }else {
                                        int x = S1[i];
                                        x += 32;
                                        char y = x;
                                        cout<<y;
                                    }
                                }
                                break;
                    }
                    break;
            case 0 :cout<<"Program Exited !";
                    exit(1);
                    break;
        }
    }
    return(0);
}
