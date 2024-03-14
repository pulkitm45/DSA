#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

char getMaxOcc(string s){
    int arr[26] = {0};
    //Loop to map Count.
    for(int i=0;i<s.length();i++){

        int number = 0;
        number = s[i] - 'a';
       cout<<"Number is "<<number<<endl;
        arr[number]++;
       cout<<"Arr[number] is "<<arr[number]<<endl;
    }

    //Get Maximum
    int max = -2,final = 0;
    for(int i =0;i<26;i++){
        if(max<arr[i]){
            max = arr[i];
            final = i;
        }
    }
 //   cout<<"Max is " <<final<<endl;
    return final + 'a';
}

int main(){

    string s = "outpuuut";

    cout<<"Maximum Occuring Character is "<<getMaxOcc(s)<<endl;
}