#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//while loop to compare both elemets of 2 arrays another while loop to copy remaining elements.

int main()
{
    vector<int> nums1;
    vector<int> nums2;
    nums1 = {1,2,3,5,7,9};
    nums2 ={2,4,6};
    int n=6,m=3;
    int i = 0, j = 0;
    vector<int> k;
    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            k.push_back(nums1[i]);
            i++;
        }
        else 
        {
            k.push_back(nums2[j]);
            j++;
        }
        
    }
    // cout<<"i is "<<i<<" j is "<<j<<endl;
    // cout<<"n is "<<n<<" m is "<<m<<endl;
     while(i<n){
          k.push_front(nums1[i]);
          i++;
         }
    while(j<m){
            k.push_back(nums2[j]);
            j++;
        }
    
    cout<<"Printing Merged Array : "<<endl;
    for(int i =0;i<k.size();i++){
        cout<<k[i]<<" ";
    }
}