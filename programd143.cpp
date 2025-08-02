#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s, int x){
if(s.empty()){
    s.push(x);
    return;
}
int num = s.top();
s.pop();
solve(s, x);
s.push(num);
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
solve(ans, 12);
cout<<"\n\nafter inserting element at last : "<<endl;
printstack(ans, 9);
cout<<"\n\n\n";
}