#include<iostream>
#include <math.h>
using namespace std;
int main(){
        int num = 32;
        int ans =  0;
        for(int i = 0; num!=0;i++){

            int digit = num%10;
            ans = ans + digit;
            num = num/10;
        }
        cout << "Answer is "<<ans;
        
}