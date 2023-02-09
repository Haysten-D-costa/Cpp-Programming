/* **********************************************************************************************************
Lab ID        : 6.1
Program Title : Strings and Arrays
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to count the no of new line,tabs and whitespace characters in a string.
********************************************************************************************************** */
#include<iostream>
#include<string>
using namespace std;
int main() {
    int i=0, newLCount=0, tabCount=0, spaceCount=0;
    string S;
    cout<<"Enter a paragraph : \n  -> ";
    getline(cin, S, '$');
    while(S[i] != '\0') {
        if(S[i] == '\n') {
            newLCount++;
        }
        if(S[i] == '\t') {
            tabCount++;
        }
        if(S[i] == ' ') {
            spaceCount++;
        }
        i++;
    }
    cout<<endl<<"Required Count : "
        <<endl<<"-> No. of new lines used are : "<<newLCount
        <<endl<<"-> No. of tabs used are      : "<<tabCount
        <<endl<<"-> No. of spaces used are    : "<<spaceCount;
    return(0);
}