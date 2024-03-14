#include<iostream>
#include <math.h>
using namespace std;
int setBits(int a, int b){
    int sum = 0;
    while(a!=0){
    int x = a&1;
    a = a>>1;
    sum = sum+x;
    }
    while(b!=0){
    int y = b&1;
    b = b>>1;
    sum = sum+y;
    }
    return sum;
}

int main(){
    int a,b,ans;
    cout<<"Enter value of a,b"<<endl;
    cin>>a>>b;
    ans = setBits(a,b);
    cout<<"Set bits are "<<ans;
    
}