#include<iostream>
#include <math.h>
using namespace std;

//compare one element with next element and swap if smaller, use 2 loops.. dont consider last element
//so loop will be till (i<n-1); use 2 loops, one for round and other for comparing.
int main(){

    int arr[] ={6,2,8,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Printing Original Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        }
    cout<<"Printing Sorted Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}