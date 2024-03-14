#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int rowSum(int arr[][3],int row,int col){
    int max = -2;
    int index = 0;
    for(int row = 0;row<3;row++){
        int sum = 0;
        for(int col =0;col<3;col++){
            sum = arr[row][col] + sum;
        }

        if(max<sum){
            max = sum;
            index = row;
        }
        cout << "Sum of Row "<<sum<<endl;

    }
    return index;
}

int colSum(int arr[][3],int row,int col){

    for(int col = 0;col<3;col++){
        int sum = 0;
        for(int row =0;row<3;row++){
            sum = arr[row][col] + sum;
        }
        cout << "Sum of Row "<<sum<<endl;
    }
}

bool search(int arr[][3],int row,int col,int ele){

    for(int row = 0;row<3;row++){
        for(int col =0;col<3;col++){
            if(arr[row][col] == ele){
                return 1;
            }
        }
}
return 0;
}

int main(){

    int arr[3][3];
    //Taking input --> Row Wise
    cout<<"Enter the Elements "<<endl;
    for(int row = 0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    // //Taking input --> Column Wise
    // for(int col = 0;col<3;col++){
    //     for(int row=0;row<3;row++){
    //         cin>>arr[row][col];
    //     }
    // }

    //Printing
    cout<<"Printing The Array "<<endl;
    for(int row = 0;row<3;row++){
        for(int col =0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    // cout<<"Enter element you want to search "<<endl;
    // int ele;
    // cin>>ele;
    // if(search(arr,3,3,ele)){

    //     cout<<"Element is found "<<endl;
    // }
    // else{
    //     cout<<"Element is not found "<<endl;
    // }

    cout<<"Row with Maximum sum is "<< rowSum(arr,3,3)<<"th Row"<<endl;
  //  colSum(arr,3,3);
}