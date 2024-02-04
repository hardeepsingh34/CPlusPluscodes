#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
char findNonRepeating(string str) {
    // Write your code here.
     char ch='a';
    for(int i=0; i<str.length(); i++){
     ch = ch^str[i];
    }
    char c =ch ;
    return ch;
}
int main(){
string n = "bbabcbcb";
cout<<findNonRepeating(n);
}