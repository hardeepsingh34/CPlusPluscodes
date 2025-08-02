#include<iostream>
using namespace std;
class CircularQueue{
int *arr;
int front;
int rear;
int size;

public:
//Initialize your data structure
CircularQueue(int n){
    size = n;
    arr = new int[size];
    front = rear = -1;

}
bool enqueue(int value){
    // to  check weather the queue is full
    if((front==0 && rear == size-1) || (rear == (front-1)%(size-1))){
      cout<<"queue is full";
      return false;
    }
    else if(front == -1){
        front = rear = 0;
    }else if(rear == size-1 && front != 0){
        rear =0 ;
        // to maintain cyclic nature
    }else{
        //normal flow
        rear++;
    }//push inside the queue
    arr[rear]=value;
    return true;
}
int dequeue(){
    if(front == -1){
        // to check queue is empty
        cout<<"queue is empty "<<endl;
        return -1;
    }
    int ans = arr[front];
    arr[front]=-1;
    if(front== rear){
        //single element present
         front = rear = -1;
    }
    else if (front== size -1){
        front =0;
    }else{
        // normal flow
        front ++;
    }return ans;
}
};
int main(){
CircularQueue q(5);
q.enqueue(5);
q.enqueue(3);
q.enqueue(34);
q.enqueue(2);
q.enqueue(6);
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
q.enqueue(3);
q.enqueue(34);
q.enqueue(2);
q.enqueue(6);

cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;

}