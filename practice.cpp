#include<iostream>
#include <math.h>
using namespace std;
int main(){
//     int n = 1;
//         switch(n){
//             case 1: cout<<"Hi"<<endl;
//                     break;
//             case 2: cout<<"Bye"<<endl;
//                     break;

//             default: cout<<"This is default";
//         }

int num = 11001;
int rev= 0;
int rem = 0;
while(num!=0){
        rem = num%10;
        rev = rev * 10 + rem;
        num = num/10;
}
cout<<rev;
}