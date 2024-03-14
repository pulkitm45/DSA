#include<iostream>
#include <math.h>
using namespace std;

//i+1 should be less than size other method using temp

void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);
    }
    }
}
void swapAlternateWithoutSwap(int arr[],int n){
    int temp;
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
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
    swapAlternateWithoutSwap(arr,n); 
    printArray(arr,n);
}