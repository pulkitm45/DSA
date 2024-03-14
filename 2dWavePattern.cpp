#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


//Check for column if even or odd jst print
int main(){

    int arr[3][4] = {1 ,2 ,3, 4, 5, 6, 7, 8, 9 ,10, 11 ,12};

    for(int row =0;row<3;row++){
        for(int col = 0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    for(int col = 0;col<4;col++){
        if((col == 0) || (col%2==0)){
            for(int row = 0;row<3;row++){
            cout<<arr[row][col]<<" ";
        }
        }
        else{
        for(int row = 3-1;row>=0;row--){
            cout<<arr[row][col]<<" ";
        }
        }
    }
}