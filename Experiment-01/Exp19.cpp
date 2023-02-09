/* **************************************************************************************************************************
Lab ID        : 1.19
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program checks and prints whether char entered is a consonant or vowel
Input         : ch
Output        : ch is a Consonant OR vowel
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;
    if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
    {
        cout<<"Character '"<<ch<<"' is a Vowel";
    }
    else if(((ch>='A')&&(ch<='Z')) || ((ch>='a')&&(ch<='z')))
    {
        cout<<"Character '"<<ch<<"' is a Consonant";
    }
    else
    {
        cout<<"Character '"<<ch<<"' is neither a Consonant nor a Vowel";
    }
    return(0);
}
