#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 

bool checkInclusion(string s1, string s2){
    int arr1[26] = {0};
    for(int i = 0;i<s1.length();i++){
        int number1 = 0;
        number1 = s1[i] - 'a';
        arr1[number1]++;
    }
    int arr2[26] = {0};
    for(int i = 0;i<s2.length();i++){
        int number2 = 0;
        number2 = s2[i] - 'a';
        arr2[number2]++;
    }
    int i = 0;
    int size = s1.length()-1;
    while(i<=s2.length()){
        int 
    }
}

int main(){
    string s1 = "ab", s2 = "eidbaooo";
    checkInclusion(s1,s2);
}