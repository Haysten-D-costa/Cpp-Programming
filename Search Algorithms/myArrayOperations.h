/* THIS IS A HEADER FILE WHICH I'VE CREATED, THAT MAKES EASY THE TASKS AND OPERATIONS ON AN ARRAY... */
#include <iostream>
using namespace std;

namespace arr 
{
    void display_array(int A[], int n) // To display any array...
    {
        for(int i=0; i<n; i++) { 
            cout << A[i] << "\t"; 
        }
    }
    void init_array(int A[], int n) // To initialize any array...
    {
        for(int i=0; i<n; i++) {
            cin >> A[i];
        }
    }
}
