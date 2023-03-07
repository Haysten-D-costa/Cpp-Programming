/* *****************************************************************************************************************
Program ID    : 1.2
Program Title : Search Algorithms
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 00-00-0000
--------------------------------------------------------------------------------------------------------------------
Description   : Program to implement 'BINARY SEARCH' Algorithm...
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

void binarySearch(int A[], int low, int up, int search);

int main()
{
    int n, A[10], search;

    cout << "Enter no. of elements to be inserted in list : "; cin >> n;
    cout << "Enter '" << n << "' elements : ";
    init_array(A, n);
    cout << endl << "Enter element to be searched in the list : ";
    cin >> search;
    cout << endl << "Searching for '" << search << "' in..." << endl;
    display_array(A, n); // Function to display array (from : myArrayOperations.h)...
    binarySearch(A, 0, n-1, search);

    return(0);
}
void binarySearch(int A[], int low, int up, int search)
{
    int counter = 0;
    while(low <= up)
    {
        int mid = (low + up)/2;
        if(search == A[mid]) // Match found, then print...
        {  
            cout << endl << "Element found at " << mid + 1; 
            counter++;
            break;
        }
        else if((search) > A[mid]) // To continue search in Right hand side...
        {
            low = mid + 1; 
        }
        else // To continue search in Left hand side...
        { 
            up = mid - 1; 
        }
    }
    if(counter == 0)
    {
        cout << endl << "No such element present in the list";
    }
}