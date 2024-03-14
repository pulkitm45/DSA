#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> ans;
    vector <int> nums1 = {1,2,2,1}, nums2 = {2,2};
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                nums2[j] = -2231;
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}