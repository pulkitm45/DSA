#include<iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int divide(long long dividend, long long divisor,int sign) {
        long long q = 0;
    //    cout<<dividend<<" "<<divisor<<endl;
        cout <<INT_MIN<<" "<<INT_MAX<<endl;
        while(dividend >= divisor){
            dividend = dividend - divisor;
            ++q;
        }
        cout<<"q is "<<q<<endl;
        if((q*sign)<=INT_MIN){
            return INT_MIN;
        }
        else if((q*sign)>=INT_MAX){
            return INT_MAX;
        }
        else{
            return q*sign;
        }
    }

    int main(){
        long long dividend = 1000000000;
        long long divisor = 1;
        long long sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    //    cout<<dividend<<" "<<divisor<<endl;
        cout<<"sign is "<<sign<<endl;
        dividend = abs(dividend);
        divisor = abs(divisor);
     //   cout<<dividend<<" "<<divisor<<endl;
        long long ans = divide(dividend,divisor,sign);
        
        cout<<"Quotient is "<<ans<<endl;
    }