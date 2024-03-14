#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n = 100011;
    int answer = 0,i=0;
    while(n!=0){
        int digit = n%10;
    if(digit == 1){
        answer = answer+pow(2,i);
    }
    n = n/10;
    i++;
    }
    cout<<"Answer is : "<<answer;
}

//2^5 2^1 1