/* **************************************************************************************************************************
Lab ID        : 1.20
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program checks whether character is a Lcase or Ucase or a number
Input         : ch
Output        : Is a number / Ucase / Lcase Alphabet
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    switch(ch)
    {
    case'0' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'1' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'2' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'3' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'4' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'5' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'6' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'7' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'8' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    case'9' :cout<<endl<<"Character '"<<ch<<"' you entered is a number !";
             break;
    default :if(ch >= 'A' && ch <= 'Z')
                cout<<endl<<"Character '"<<ch<<"' you entered is a Upper-case Alphabet !";
             else if(ch >= 'a' && ch <= 'z')
                cout<<endl<<"Character '"<<ch<<"' you entered is a Lower-case Alphabet !";
             else
                cout<<endl<<"ERROR ! Invalid Input !!";
    }

}
