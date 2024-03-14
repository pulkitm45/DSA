#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n,h,f,t,o;
    cout<<"enter value of n"<<endl;
    cin>>n;
    switch(1){
        case 1: h = n/100;
                n = n%100;
        case 2: f = n/50;
                n = n%50;
        case 3: t = n/20;
                n = n%20;
        case 4: o = n/1;
                n = n%1; 
    }
    cout<<"Notes required for "<<n <<" are : "<<h<<" Hundred Rupee Notes "<<f<<" fifty rupee notes "<<t<<" twenty rupee notes "<<o<<" one rupee notes"<<endl;
}