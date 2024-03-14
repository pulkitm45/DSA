#include<iostream>
#include <math.h>
#include <algorithm>
using namespace std;

//using 3 variables hi low and medium.. need to perform all operations on medium.

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
    int arr[] = {0,1,1,2,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
//    cout<<sizeof(arr)<<" "<<sizeof(arr[0]);
    //cout<<n;
   // int n =10;
    int  i =0;
    int j = 0;
    int k=n-1;
    while(j<=k){
        if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j] == 1){
            j++;
        }
        else if(arr[j] == 2){
            swap(arr[j],arr[k]);
            k--;
        }
    }

   printArray(arr,n);
}