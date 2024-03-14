#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
/*use same as binary search but issme u have to store the element and in case of first occurence go back i.e end = mid -1 and for last go in front i./e start = mid +1;
*/


int firstOcc(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int ans = 0;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int ans = 0;
    int mid = (start + end)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}
int main()
{
    int arr[] = {5,7,7,8,8,8,8,8,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele = 8;
    int first,last;
    first = firstOcc(arr,n,ele);
    last = lastOcc(arr,n,ele);
    cout <<"First occurencr is "<<first<<endl;
    cout <<"Last occurence is "<<last<<endl;
    int total = last - first + 1;

    cout<<"Total number of occurrence of "<<ele<<" is "<<total<<endl;
}