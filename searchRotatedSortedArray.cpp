#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//Find pivot by checking if arr[mid] > = arr[0]
//First find pivot then accordin to pivot, use binary search with start and end.

int getPivot(vector<int> &nums, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (nums[mid] >= nums[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return mid;
}

int binarySearch(vector<int> &nums, int s, int e, int target)
{
    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    int flag = 0;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            flag = 1;
            return mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = start + 1;
        }
        mid = (start + end) / 2;
    }
    // if (flag == 0)
    // {
    //     return -1;
    // }
    // else
    // {
    //     return mid;
    // }
}

int main()
{
    vector<int> nums = {1,3};
    int size = nums.size();
    int target = 5;
    int pivot = getPivot(nums, size);
    int ans = 0;
    cout << "Pivot index is " << pivot << endl;
    if (target >= nums[pivot] && target <= nums[size - 1])
    {
        ans = binarySearch(nums,pivot,size-1,target);
    }
    else{
        ans = binarySearch(nums,0,pivot,target);
    }
    cout << "The Index is " << ans << endl;
}