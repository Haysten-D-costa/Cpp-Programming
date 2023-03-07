/* *****************************************************************************************************************
Program ID    : 1.1
Program Title : Search Algorithms
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 00-00-0000
--------------------------------------------------------------------------------------------------------------------
Description   : Program to implement 'LINEAR SEARCH' Algorithm...
Input         : --
Output        : --
Algorithm     : --
Prerequisites : Basics of C++
Known Bugs    : NONE
***************************************************************************************************************** */
#include <iostream>
#include "myArrayOperations.h"
using namespace std;
using namespace arr;

int linearSearch(int A[], int n, int search); // Function searches occurances of required element(search/key) 'Linearly' in the list...

int main()
{
    int n, A[10], search;
    cout << endl << "Enter no. of elements to be inserted : ";
    cin >> n;
    cout << "Enter '" << n << "' elements : ";
    for(int i=0; i<n; i++) 
    {
        cin >> A[i];
    }
    cout << endl << "Enter element to be searched in the list : ";
    cin >> search;
    cout << endl << "Searching for '" << search << "' in..." << endl;
    display_array(A, n); // Function to display array (from : myArrayOperations.h)...
    linearSearch(A, n, search);
  
    return(0);
}
int linearSearch(int A[], int n, int search) 
{
    int pos = 0;      // position pointer (to access positions in list in a sequence)... 
    int counter = 0;  // counter (to keep track of no. of element matched)...
    while(pos < n)    // to check for all elements...
    {
        if(A[pos] == search) // if match, then display position, and increment pos + counter...
        {
            cout << endl << "Element found at position '" << pos + 1 << "' (index " << pos << ")";
            pos++; counter++;
        }
        else // if no match, then just increment pos...
        {
            pos++;
        }
    }
    if(counter == 0) // if counter == 0, implies no match was found (in entire array)...
    { 
        cout << endl << "No such element present in the list...";
    }
  
}