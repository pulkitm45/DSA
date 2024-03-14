#include<iostream>
#include <math.h>
using namespace std;

int fibonacci(int n){
    int a=0,b=1,c;
    for(int i=2;i<n;i++){
        c=a+b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int n,ans;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    ans = fibonacci(n);
    cout<<"Nth number is : "<<ans<<endl;
}