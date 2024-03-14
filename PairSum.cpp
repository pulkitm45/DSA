#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void printArray(int arr[], int size)
{

    cout << "Starting to print array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array Printed" << endl;
}

int main()
{

    vector<int> ans;
    vector <int> arr = {2,3,5,65,6,1,4,0};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == 5)
            {
                // vector<int> temp;
                ans.push_back(min(arr[i], arr[j]));
                ans.push_back(max(arr[i], arr[j]));
               // ans.push_back(temp);
            }
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}