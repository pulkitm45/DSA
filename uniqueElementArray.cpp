#include<iostream>
#include <math.h>
using namespace std;

//XOR to cancel same element

int uniqueElements(int arr[],int n){
    int ans = 0;

    
    for(int i=0;i<n;i++){
        
        ans = ans^arr[i];
        cout<<"Ans in first : "<<ans<<endl;
 //       
    }

    for(int i=1;i<n;i++){
        
        ans = ans^i;
        cout<<"Ans in second : "<<ans<<endl;
   //     
    }

    return ans;
}

int uniqueElement(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
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
    int ans = uniqueElements(arr,n); 
    cout<<"Unique element is: "<<ans<<endl;

}