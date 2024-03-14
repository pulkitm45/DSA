

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//check with previous element if count exists more than once then false
//i-1 should not be greater than i. compare last element also with i=0

bool check(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        if(count > 1){
            return false;
        }
        else
        return true;
    }