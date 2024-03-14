#include<iostream>
#include <math.h>
using namespace std;

//compare one element with all others and swap if smaller, use 2 loops.
int main(){

    int arr[] ={5,1,1,2,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Printing Original Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){  //round 0 to n-1;
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    cout<<"Printing Sorted Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}