#include<iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//simply get number from arrays, add it and push it to vector and reverse it

vector<int> reverse(vector<int> &ans){
    int s=0;
    int e = ans.size()-1;
    while(s<e){
        swap(ans[s],ans[e]);
        s++;
        e--;
    }

    return ans;
}


vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int> ans;
    int sum = 0;
    int ansa=0;
    int ansb=0;
    for(int i=0;i<n;i++){
        ansa=ansa*10+a[i];
    }
    for(int i=0;i<m;i++){
        ansb=ansb*10+b[i];
    }

    sum = ansa+ansb;
    int rem = 0;
    while(sum!=0){
        rem = sum%10;
        cout<<"Rem is "<<rem<<endl;
        ans.push_back(rem);
        sum = sum/10;
    }

    reverse(ans);
    return ans;
    
}

int main(){

    vector<int> a = {1 ,2, 3,4};
    vector<int> b = {6};
    int n = 4;
    int m = 1;
    vector<int> ans = findArraySum(a,n,b,m);
    cout<<"Printing Answer"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

