#include<iostream>
#include<queue>
using namespace std;
/*
In C++, a queue is a container adaptor that provides FIFO (First-In, First-Out)
data structure behavior. The std::queue class template acts as a wrapper to an
underlying container, typically std::deque or std::list. This means that elements
are inserted at the back and removed from the front.
*/
int main(){
priority_queue<int >maxi;
priority_queue<int,vector<int>,greater<int>>mini;
maxi.push(1);
maxi.push(2);
maxi.push(6);
maxi.push(4);
cout<<"size  "<<maxi.size()<<endl;
int n = maxi.size();
for(int i=0 ; i<n; i++){
    cout<<maxi.top()<<"  ";
    maxi.pop();
}cout<<endl;
mini.push(5);
mini.push(1);
mini.push(0);
mini.push(4);
mini.push(3);
int m=mini.size();
for(int i=0; i<m; i++){
    cout<<mini.top()<<"  ";
    mini.pop();
}cout<<endl;
cout<<" khali hai kya bhai "<<mini.empty()<<endl;
}