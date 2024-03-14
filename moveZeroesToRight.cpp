#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//Assign i as 0th index and swap with j if non zero is encountered

int main(){
    int arr[6] = {0,0,0,2,0,3};
    int n= sizeof(arr)/sizeof(arr[0]);

    // int i=0,j=0;
    // while(j<n){
    //         if(arr[j]!=0){
    //             swap(arr[j],arr[i]);
    //             i++;
    //         }
    //         j++;
    // }

    int i = 0;
    int left = 0;
    while(i<n){
        if(arr[i] != 0){
            swap(arr[i],arr[left]);
            i++;
            left++;
        }
        else{
            i++;
        }
    }
        
    cout<<"Printing Array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}