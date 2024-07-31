#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&inputstack, int count, int n){
if(count == n/2){
    inputstack.pop();
    return;
}
int num = inputstack.top();
inputstack.pop();
solve(inputstack , count+1, n);
inputstack.push(num);
}
void deleteMiddle(stack<int>&inputstack, int n){
int count= 0;
solve(inputstack, count, n);
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
printstack(ans, 8);
deleteMiddle(ans, 8);
cout<<"resultant stack is "<<endl;
printstack(ans, 8);
}