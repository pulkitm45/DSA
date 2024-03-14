#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int getLength(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

//Find Difference between same case and add other case letter.
getLower(string s){
    for(int i = 0;i<s.length();i++){
        if(s[i] >= 'A' && s[i]<= 'Z')
        s[i] = s[i] - 'A' + 'a';
        cout<<"Lower Case is "<<s[i]<<endl;
    }
}

getUpper(string s){
    for(int i = 0;i<s.length();i++){
        if(s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
        cout<<"Upper Case is "<<s[i]<<endl;
    }
}

void reverseString(char s[])
{
    int start = 0;
    int e = getLength(s);
    while (start <= e)
    {
        cout<<s[start]<<endl;
        cout<<s[e]<<endl;
        swap(s[start], s[e]);
        start++;
        e--;
    }
}

int main()
{
    string s = "Hi How are u";
    //char charA[5] = {"h","e","l","l","o"};
    getLower(s);
    getUpper(s);
    //reverseString(charA);
    // int count = 0;
    // for (int i = 0; charA[i] != '\0'; i++)
    // {
    //     count++;
    //     cout << charA[i] << " ";
    // }
    // cout << "Size " << count << endl;
    // cout << s << endl;
    // for (int i = 0; i < s.length(); i++)
    // {

    //     if (s[i] == ' ')
    //     {
    //         s[i] = '@';
    //         s.insert(i + 1, "40");
    //     }
    // }
    // cout << s << endl;
}