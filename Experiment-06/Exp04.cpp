/* **********************************************************************************************************
Lab ID        : 6.4
Program Title : Strings and Arrays
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch P3]
Language      : C++
Due Date      : 26-10-2022
-------------------------------------------------------------------------------------------------------------
Description   : Program to implement binary search and bubble sort.
********************************************************************************************************** */
#include<iostream>
using namespace std;
void bubbleSort(int A[], int n);
void binarySearch(int n, int low, int mid, int high, int count, int search, int A[]);
int main() {
    int n, low, mid, high, code, count, search, A[10];
    cout<<"1 -> Binary Search"<<endl
        <<"2 -> Bubble Sort"<<endl
        <<"0 -> Exit Program"<<endl;
    do{
        cout<<endl<<"Enter code of operation : "; cin>>code;
        switch(code){

        case 1 :cout<<"Enter the no. of elements to be inserted : "; cin>>n;
                cout<<"Enter array elements : ";
                for(int i=0; i<n; i++) {
                    cin>>A[i];
                }
                low=0; high=n-1; mid=(low + high)/2;
                cout<<"Enter element to be searched : "; cin>>search;
                binarySearch(n, low, mid, high, count, search, A);
                break;
        case 2 :cout<<endl<<"Enter the no. of elements to be inserted : "; cin>>n;
                cout<<endl<<"Enter array elements : ";
                for(int i=0; i<n; i++) {
                    cin>>A[i];
                }
                bubbleSort(A, n);
                break;
        }
    }while(code != 0);

    return(0);
}
void binarySearch(int n, int low, int mid, int high, int count, int search, int A[]) {
    while(low <= high) {
        mid = (low + high)/2;
        if(A[mid] == search) {
            count++;
            cout<<endl<<"Element found at position "<<mid<<endl;
        }
        if(search > A[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(count == 0) {
        cout<<"No element found !";
    }
}
void bubbleSort(int A[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            if(A[j] > A[j+1]) {
                int temp;
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    cout<<endl<<"Sorted Array : "<<"\t";
    for(int i=0; i<n; i++) {
        cout<<A[i]<<"\t";
    }
}
void initArray(int A[], int n) {

}
