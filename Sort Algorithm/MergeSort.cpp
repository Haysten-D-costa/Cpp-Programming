#include <iostream>
#include "../HeaderFiles/myArrayOperations.h"
using namespace std;
using namespace arr;

void sort(int A[], int low, int up);
void mergeSort(int A[], int low, int mid, int up);

int n, A[10], B[10];

int main()
{
    cout << "Enter no. of elements to be inserted in list : "; cin >> n;
    cout << "Enter '" << n << "' elements : ";
    init_array(A, n);
    cout << endl << "Unsorted list : "; display_array(A, n);
    sort(A, 0, n-1);
    cout << endl << "Sorted list   : "; display_array(A, n);

    return(0);
}
void sort(int A[], int low, int up)
{
    if(low < up) 
    {
        int mid = (low + up)/2;
        sort(A, low, mid);
        sort(A, mid+1, up);
        mergeSort(A, low, mid, up);
    }
}
void mergeSort(int A[], int low, int mid, int up)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    while((i <= mid) &&(j <= up))
    {
        if(A[i] <= A[j]) {
            B[k] = A[i];
            i++; k++;
        }
        else {
            B[k] = A[j];
            j++; k++;
        }
    }
    if(i > mid) {
        while(j <= up) {
            B[k] = A[j];
            j++; k++;
        }
    }
    else {
        while(i <= mid) {
            B[k] = A[i];
            i++; k++;
        }
    }
    for(int i=low; i<=up; i++) {
        A[i] = B[i];
    }
}
