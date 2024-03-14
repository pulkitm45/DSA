#include<iostream>
#include <math.h>
using namespace std;

//2 methods one using swap other using another array

int reverse(int arr[],int n){
    int start,end=n-1;
    for(start=0;start<=end;start++,end--){
        swap(arr[start],arr[end]);
    }

}

int reverseDuplicate(int arr[],int n){
    int arr2[10];
    int end = n-1;
    for(int i =end;i>=0;i--){
        for(int j=0;j<n;j++){
        arr2[j] = arr[i];
        }
    }
}
void printArray(int arr[],int size){

    cout<<"Starting to print array"<<endl;

    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array Printed"<<endl;
}
int main(){
    int n;
    cout<<"Enter Size of array"<<endl;
    cin>>n;
    int arr[10];
    cout<<"Enter the Array Items";
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    //reverse(arr,n);
    //reverseDuplicate(arr,n);
    int arr2[10];
    int end = n-1;

    for(int i =end,j=0;i>=0,j<n;i--,j++){
            arr2[j] = arr[i];
    }
    printArray(arr2,n);
}