// Perform Sorting on a given array using insertionSort
// Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
// Algorithm :
// Loop from i = 1 to n-1.
// ……a) Pick element arr[i] and insert it into sorted sequence arr[0…i-1]
// Time Complexity: O(n*n)
// Auxiliary Space: O(1)
// Insertion sort takes maximum time to sort if elements are sorted in reverse order
//      and it takes minimum time (Order of n) when elements are already sorted.
// Insertion sort is used when number of elements is small. 
// It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.

#include<iostream>
#include<stdio.h>

using namespace std;

void displayArray(int *a,int n,string msg){
    cout<<msg<<endl;
    cout<<"[";
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<a[i];
        }else{
            cout<<a[i]<<",";
        }
    }
    cout<<"]";
}

void performInsertionSort(int *a,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key = a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    displayArray(a,n,"Sorted Array:");    
}

int main(){
    int a[]={5,6,2,3,7,8,1};
    performInsertionSort(a,7);
    return 0;
}