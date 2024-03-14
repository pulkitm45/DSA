#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//use while loop till start<end .

int main(){
    int arr[] = {3,4,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        cout<<start<<" , "<<end<<endl;
        mid = (start+end)/2;
        cout<<mid<<endl;
        
    }
    cout<<"Peak is "<<mid;
}