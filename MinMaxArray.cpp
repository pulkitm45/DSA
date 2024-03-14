#include<iostream>
#include <math.h>
using namespace std;

int getMin(int arr[],int n){
    int min = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return  min;
}

int getMax(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
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
    cout<<"Minimum Value is "<<getMin(arr,n)<<endl;
    cout<<"Maximum Value is "<<getMax(arr,n);
}
