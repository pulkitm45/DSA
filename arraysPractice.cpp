#include<iostream>
#include <math.h>
using namespace std;


void printArray(int arr[],int size){

    cout<<"Starting to print array"<<endl;

    for(int i = 1; i<=size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"Array Printed"<<endl;
}

void updateArray(int arr[],int size){
    arr[1] = 32;
    cout<<"Updated Value"<<endl;
    printArray(arr,size);
}

int main(){
    // int n;
    // cout<<"Enter Size of array"<<endl;
    // cin>>n;
    // int arr[10];
    // cout<<"Enter the Array Items";
    // for(int i =0 ;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"First Time Without Updating"<<endl<<endl;
    // printArray(arr,n);
    // cout<<"First Time With Updating"<<endl<<endl;
    // updateArray(arr,n);
    // cout<<"Second Time With Updating"<<endl<<endl;

    int arr[] = {1,2,3,4,5,6};
    int n=6;
    printArray(arr,n);
}