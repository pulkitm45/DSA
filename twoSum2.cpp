#include<iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


//Printing Index from Array. Compare using 2 pointers one from start other from end.

vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int s=0;
        int sum=0;
        int e =numbers.size()-1;
        while(s<e){
         sum = numbers[s]+numbers[e];
         if(sum == target){
             ans.push_back(s+1);
             ans.push_back(e+1);
             break;
         }
         else if(sum>target){
             e--;
         }
         else{
             s++;
         }
        }
        return ans;
    }

    int main(){

        vector<int> numbers = {2,7,11,15};
        int target = 9;
        vector<int> ans = twoSum(numbers,target);
        for(int i=0;i<ans.size();i++){
            cout<<numbers[i]<<" ";
        }
    }