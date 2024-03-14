#include<iostream>
#include <math.h>
using namespace std;

bool linearSearch(int arr[],int n, int ele){
    for(int i =0;i<n;i++){
        if(arr[i]==ele){
            return true;
        }
    }
    return  false;
}

int main(){
    int n,key;
    cout<<"Enter Size of array"<<endl;
    cin>>n;
    int arr[10];
    cout<<"Enter the Array Items";
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin >> key;
    bool found = linearSearch(arr,n,key);
    if(found){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
}