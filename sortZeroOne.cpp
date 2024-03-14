#include<iostream>
#include <math.h>
#include <algorithm>
using namespace std;
//using 2 vairables, and checking if i<j and swapping if i !=0 and j!=1

  void printArray(int arr[],int size){

    cout<<"Starting to print array"<<endl;

    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array Printed"<<endl;
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
    int arr[] = {1,1,1,0,1,0,1,1,1,1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
//    cout<<sizeof(arr)<<" "<<sizeof(arr[0]);
    //cout<<n;
   // int n =10;
    int  i =0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
        else if(arr[i] > arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

   printArray(arr,n);
}