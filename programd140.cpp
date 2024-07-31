#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "babbar";
    stack<char>s;
    int n = str.length();
    for(int i= 0; i<n; i++){
        char ch= str[i];
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"answer is "<<ans<<endl;
    return 0;
}