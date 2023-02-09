/* **********************************************************************************************************
Lab ID        : 6.2
Program Title : Strings and Arrays
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to read a string and check for and count spam words in the string
********************************************************************************************************** */
#include<iostream>
#include<string>
using namespace std;
string S1="ganja"; string S2="steal"; string S3="smoking"; string S4="drugs"; string S5="killed"; string S6="kidnapped";
void spamCheck(int pos1, int pos2, int pos3, int pos4, int pos5, int pos6) {
    int count = 0;
    cout<<"Spam words used        : ";
    if(pos1!=-1) {count++; cout<<S1<<", ";}
    if(pos2!=-1) {count++; cout<<S2<<", ";}
    if(pos3!=-1) {count++; cout<<S3<<", ";}
    if(pos4!=-1) {count++; cout<<S4<<", ";}
    if(pos5!=-1) {count++; cout<<S5<<", ";}
    if(pos6!=-1) {count++; cout<<S6<<", ";}
    cout<<endl<<"No. of spam words used : "<<count<<" words";
}
int main() {
    string s;
    int n, i;
    cout<<"Enter a string to be scanned for spam words : "<<"\n\n  -> ";
    getline(cin, s, '$');
    int pos1, pos2, pos3, pos4, pos5, pos6;
    pos1 = s.find(S1, 0);pos2 = s.find(S2, 0);
    pos3 = s.find(S3, 0);pos4 = s.find(S4, 0);
    pos5 = s.find(S5, 0);pos6 = s.find(S6, 0);
    if((pos1!=-1)||(pos2!=-1)||(pos3!=-1)||(pos4!=-1)||(pos5!=-1)||(pos6!=-1)) {
        cout<<endl<<"Spam Words included !!"<<endl
            <<endl;
        spamCheck(pos1, pos2, pos3, pos4, pos5, pos6);
    } else {
        cout<<endl<<"No Spam Words included !!";
    }
    cout<<endl<<endl;
    return(0);
}
