#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int>&s , int num){
    //base case
    if(s.empty()||(!s.empty()&& s.top()<num)){
        s.push(num);
        return;
    }
    int m = s.top();
    s.pop();
    // recursive call
    sortedInsert(s, num);
    s.push(m);
}
void sortstack(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    // recursive call
    sortstack(s);
    sortedInsert(s, num);
    }
    void printstack(stack<int>s , int size){
    for(int i = 0; i<size; i++){
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main(){
stack<int> ans;
ans.push(3);
ans.push(43);
ans.push(37);
ans.push(493);
ans.push(32);
ans.push(443);
ans.push(13);
ans.push(5);
cout<<"\n\nbefore :"<<endl;
printstack(ans, 8);
sortstack(ans);
cout<<"\n\nafter sorting "<<endl;
printstack(ans,8);
}