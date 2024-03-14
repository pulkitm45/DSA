#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

double squareRoot(int n){
    int start =0;
    int end = n;
    int ans = 0;
    int mid = (start+end)/2;
    while(start<=end){
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid > n){
            end = mid - 1;
        }
        else{
            ans =  mid;
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

double precision(int n,int p,int tmp){
    double factor = 1;
    double ans = tmp;
    for(int i = 0;i<p;i++){
        factor = factor/10;
        for(double j = ans ; j=j<n ; j=j+factor){
            ans = j;
        }
    }
    
    return ans;
}

int main(){

    int n,p;
    cout<<"Enter the square "<<endl;
    cin>>n;
    cout<<"Enter the precision "<<endl;
    cin>>p;
    int tmp = squareRoot(n);
    cout<<n<<" is the square of "<<precision(n,p,tmp)<<endl;
}