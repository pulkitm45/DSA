#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 

bool validChar(char a){
        if((a>='a' && a<='z') || (a>='0' && a <= '9') || (a>='A' && a<='Z')){
            return 1;
        }
        else{
        return 0;
        }
    }
char getLower(char a){
    if((a >= 'a' && a<='z') || (a>='0' && a<='9')){
        return a;
    } 
    else {
      a = a - 'A' + 'a';
      return a;
    }
}
bool checkPalindrome(string s)
{
    // Write your code here.
    string temp;
    for(int i=0;i<s.length();i++){
        if(validChar(s[i])){
            getLower(s[i]);
            temp.push_back(s[i]);
        }
    }
    for(int i=0;i<temp.length();i++){
        temp[i] = getLower(temp[i]);
    }

    int st = 0;
    int e = temp.length()-1;
    while(st<=e){
        if(temp[st] != temp[e]){
            cout<<"Not Palindrome"<<endl;
            break;
        }
        else{
            st++;
            e--;
        }
    }
    cout<<"Palindrome"<<endl;
}
int main(){
    string s = "A man, a plan, a canal: Panama";

 //   cout<<"Lower case " << getLower('p')<<endl;
    checkPalindrome(s);
}