#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// reversing a queue using a stack  ;
// so space complexity is O(n);
queue<int> reverse(queue<int>q){
    stack<int>s;
    while(!q.empty()){
       int element = q.front();
       q.pop();
       s.push(element);
    }
    while(!s.empty()){
           int element = s.top();
           s.pop();
           q.push(element);
    }
    return q;
} 
void printqueue(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
queue<int>q;
q.push(3);
q.push(5);
q.push(6);
q.push(7);
q.push(9);
queue<int>ans;
cout<<"queue before reverse :";
printqueue(q);
cout<<endl;
ans = reverse(q);
cout<<"queue after reverse  :";
printqueue(ans);
cout<<endl;
}