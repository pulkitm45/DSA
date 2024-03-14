#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//Number of Rows can be calculated by checking size of matrix
//Number of Columns can be calculated by checking size of any one row of matrix

//Starting Row,Ending Colum,Ending Row,Starting Column

int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();
    int total = row*col;
    int count = 0;
    
    //Indexes

    int startingCol = 0;
    int startingRow = 0;
    int endingCol = col - 1;
    int endingrow = row-1;

    while(count < total){

        //Starting Row
        for(int index = startingCol;count < total && index<=endingCol;index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //Ending Column
        for(int index = startingRow;count < total && index<=endingrow;index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //Ending Row
        for(int index = endingCol;count < total && index>=startingCol;index--){
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;

        //Starting Column
        for(int index = endingrow;count < total && index>=startingRow;index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}