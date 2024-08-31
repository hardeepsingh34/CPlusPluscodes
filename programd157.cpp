#include<iostream>
using namespace std;
class deque{
int *arr;
int front;
int rear;
int size;
public:
//intialize your data structure
deque(int n){
    size = n;
    arr = new int [n];
    front = -1;
    rear = -1;
}
bool isFull(){
    if((front == 0 && rear == size -1)||(front !=0 && rear == (front-1)%(size-1)))
    {
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(front == -1)
    return true;
else
    return false;
}
bool pushFront(int x){
    // check full or not 
    if( isFull()){
        cout<<"deque is full "<<endl;
        return false;
    }else if(isEmpty()){
        front = rear = 0;
    }else if (front==0 && rear != size-1){
        front = size-1;
    }else{
        front--;
    }
    arr[front] = x;
    return true;
}
bool pushRear(int x){
    // check full or not 
    if( isFull()){
        cout<<"deque is full"<<endl;
        return false;
    }else if(isEmpty()){
        front = rear = 0;
    }else if (front!=0 && rear == size-1){
        rear =0;
    }else{
        rear++;
    }
    arr[rear] = x;
    return true;
}
int popFront(){
    if(isEmpty()){
        return -1;
    }
    int ans = arr[front];
    arr[front] = -1;
    if(front==rear){
        //single element
        front = rear = -1;
    }
    else if (front == size -1 ){
        front =0;
    }else{
        //normal flow
        front++;
    }
    return ans;
}
int popRear(){
     if(isEmpty()){
        return -1;
     }
     int ans = arr[rear];
     arr[rear] =-1;

     if(front == rear){
        // single element
        front = rear = -1;
     } else if( rear == 0){
         rear = size-1; // cyclic flow
     }else{
        rear--;
     }
     return ans;
}
int getFront(){
    if(isEmpty()){
        cout<<"Deque is empty"<<endl;
        return -1;
    }
    return arr[front];
}
int getRear(){
    if(isEmpty()){
        cout<<"Deque is empty"<<endl;
        return -1;
    }
    return arr[rear];
}
};
int main(){
deque d(6);
d.pushRear(3);
d.pushFront(5);
d.pushRear(34);
d.pushRear(53);
d.pushRear(32);
d.pushRear(24);
d.pushFront(340);
cout<<d.popRear()<<endl;
cout<<d.popFront()<<endl;
}