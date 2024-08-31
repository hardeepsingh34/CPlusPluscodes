#include<iostream>
#include<queue>
#include<stack>
using namespace std;
//reverse first k elements of queue
queue<int> modifyQueue(queue<int>q ,int k){
    // step 1: pop first k element from q and put into stack;
    stack<int>s;
    for(int i =0; i<k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    //step 2: fetch from stack and push into q
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    //step 3: fetch first(n-k) element from q and push back
    int t = q.size()-k;
    while(t--){
        int val =q.front();
        q.pop();
        q.push(val);
    }
    return q;
}

void printqueue(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(10);
    q.push(34);
    q.push(348);
    q.push(4);
    q.push(5);
    q.push(43);
    printqueue(q);
    queue<int>ans;
    ans = modifyQueue(q, 4);
    printqueue(ans);
}