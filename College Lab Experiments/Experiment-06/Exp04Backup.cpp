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

void display(int a[], int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    }
void bubbleSort(int a[], int n){
    int tmp;
    cout << endl << "Before Sorting " << endl;
    display(a, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    cout << endl << "\nAfter Sorting " << endl;
    display(a, n);
}
void binarySearch(int a[], int n){
    int low, high, mid, ele;
    low = 0;
    high = n - 1;
    cout << endl << "\nEnter the element to be searched : ";
    cin >> ele;
    while(low < high){
        mid = (low + high) / 2;
        if(a[mid] == ele){
            cout << "Element found at position " << mid + 1 << endl;
            return;
        }
        if(ele < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Element not found!" << endl;
}
int main(){
int a[50];
int size;
cout << "Enter the number of elements : ";
cin >> size;
cout << "Enter the elments : " << endl;
for(int i = 0; i < size; i++)
cin >> a[i];
bubbleSort(a, size);
binarySearch(a, size);
return 0;
}
