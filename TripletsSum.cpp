#include <iostream>
#include <math.h>
#include <vector>
#include <set>
using namespace std;


//use 3 loops starting from 3 different continuous indexes.
int main(){
vector<int> ans;
set <int> temp;
    vector <int> arr = {10, 5, 5, 5, 2};
        int size = arr.size();
   		for(int i =0;i<size-2;i++){
        	for(int j = i+1;j<size-1;j++){
				for(int h = j+1;h<size;h++){
                    cout<<arr[i]<<" = "<<i<<" , " <<arr[j]<<" = "<<j<<" , " <<arr[h]<<" = " <<h<<endl;
					if (arr[i] + arr[j]+ arr[h] == 12) {
					//vector <int> temp;
					ans.push_back(arr[i]);
					ans.push_back(arr[j]);
					ans.push_back(arr[h]);
					break;
				//	ans.push_back(temp);
					}
					break;
                }
				break;
      }
   }
   
   for(int i = 0; i < ans.size(); i++) {
    cout << ans[i]<< " ";
    }
    
}