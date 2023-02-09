/* **************************************************************************************************************************
Lab ID        : 1.16
Program Title : Basics of C++
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 07-09-2022
-----------------------------------------------------------------------------------------------------------------------------
Description   : Program computes Area of Circle using user defined constants
Input         : r{Circle}, b, h(RA Triangle)
Output        : Area of Circle(Ans 452.16)
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NONE
************************************************************************************************************************** */
#include<iostream>
//USER DEFINED CONSTANTS(pi AND rad)
const float pi = 3.14;
const float rad = 12;
using namespace std;
int main()
{
    float areaC; //TO STORE COMPUTED AREA
    areaC = pi * rad * rad; //COMPUTATION OF AREA
    cout<<"Area of circle with radius '"<<rad<<"' = "<<areaC;
    return(0);
}
