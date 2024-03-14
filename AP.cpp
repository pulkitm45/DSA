#include<iostream>
#include <math.h>
using namespace std;
int ap(int n){
    int ans = 3 * n + 7;
    return ans;
}

int main(){
    int n,ans;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    ans = ap(n);
    cout<<"Nth Value is : "<<ans;
}