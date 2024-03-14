#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a =6;
    int arr[10] = {0,2,3,4,5,6};

    int *p = &arr[3];

//second fouth,first fifth, 
 /*   cout<<"1st "<<p<<endl;
    cout<<"2nd "<<*p<<endl;
    cout<<"3rd "<<&p<<endl;
    cout<<"4th "<<a<<endl;
    cout<<"5th "<<&a<<endl;
*/
    cout<<"1st "<<arr<<endl;
    cout<<p<<endl;
    cout<<"2nd "<<*p<<endl;
    cout<<"3rd "<<&p<<endl;
    cout<<"4th "<<*p+1<<endl;
    cout<<"5th "<<*(p+2)<<endl;

}