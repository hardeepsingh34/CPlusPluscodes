#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s, int x){
    //base case
if(s.empty()){
    s.push(x);
    return;
}
int num = s.top();
s.pop();
// recursive call
solve(s, x);
s.push(num);
}
void printstack(stack<int>s , int size){
    for(int i = 0; i<size; i++){
        cout<<s.top()<<endl;
        s.pop();
    }
}
void reverseStack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    //recurrsive relation 
    reverseStack(s);
    solve(s,num);
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
solve(ans, 12);
cout<<"\n\nafter inserting element at last : "<<endl;
printstack(ans, 9);
cout<<"\n\n";
reverseStack(ans);
cout<<"after reversing stack "<<endl;
printstack(ans,9);
}