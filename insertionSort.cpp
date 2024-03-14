#include<iostream>
#include <math.h>
using namespace std;

//let frst element as sorted, compare from second element till n-1, if elemnt larger than previous, shift 
//the element to i+1 and if its larger jst break. Put element on j+1 position as j will always be compared to a smaller element.

int main(){

    int arr[] ={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Printing Original Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 1;
    int temp;
    while(i<n){
        temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] =temp;
        i++; 
    }
    cout<<"Printing Sorted Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}