#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter the opearation to be performed"<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<"Sum is "<<a+b;
                    break;
        case '-': cout<<"Difference is "<<a-b;
                    break;
        case '*': cout<<"Product is "<<a*b;
                    break;

        case '/': cout<<"Quotient is "<<a/b;
                    break;

        case '%': cout<<"Remainder is "<<a%b;
                    break;
    }
}
