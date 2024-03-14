#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

/* use one loop start<=end and try checking if element matches mid.*/
int main()
{
    int arr[] = {3,8,11,14,16,87};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int flag = 1;
    int start = 0;
    int end = n - 1;
    int mid = 0;
    for (int i = 0; i < n; i++)
    {
     //  cout<<"Values "<<start<<end<<endl;
        mid = (start + end) / 2;
      //  cout<<mid<<endl;

        if(arr[mid] == key){
            flag = 0;
            break;
        }

        else if (arr[mid] < key)
        {
            start = mid+1;
         //   end = n - 1;
        }
        else if (arr[mid] > key)
        {
      //      start = 0;
            end = mid - 1;
        }
        
    }
    if(flag == 0){
        cout<<key<<" is found at index "<<mid;
    }
    else{
        cout<<key<<" is found at index -1"<<endl;
    }
}