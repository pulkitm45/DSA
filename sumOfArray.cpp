#include<iostream>
#include <math.h>
using namespace std;

int sumOfArray(int arr[],int n){

    int sum=0;
    for(int i =0;i<n;i++){
        sum = sum+arr[i];
    }
    return sum;
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
    int sum = sumOfArray(arr,n);
    cout<<"Sum of the given array is : "<<sum<<endl;
}