#include<iostream>
#include<queue>
using namespace std;

int main(){
queue<int>q;
q.push(1);
cout<<"front of q is :"<<q.front()<<endl;
q.push(15);
cout<<"front of q is :"<<q.front()<<endl;
q.push(13);
cout<<"front of q is :"<<q.front()<<endl;
cout<<"size of  queue is :"<<q.size()<<endl;
q.pop();
q.pop();
q.pop();
cout<<"size of queue is :"<<q.size()<<endl;
if(q.empty()){
    cout<<"Queue is empty"<<endl;
}else{
    cout<<"queue is not empty"<<endl;
}
<<<<<<< HEAD
}  
=======
}
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
