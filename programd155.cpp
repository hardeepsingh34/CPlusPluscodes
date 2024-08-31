#include<iostream>
using namespace std;
class queue{
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    queue(){
        size = 100001;
        arr = new int[size];
        qfront= 0;
        rear= 0;
    }
    bool isempty(){
        if(qfront == rear){
            return true;
        }else{
            return false;
        }
    }
    void enqueue(int data){
        if(rear== size)
        cout<<"queue is full"<<endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue(){
        if(qfront == rear){
            return -1;
        }else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront =0;
                rear =0 ;
            }
            return ans;
        }
    }
};
int main(){
queue q;
q.enqueue(1);
q.enqueue(10);
q.enqueue(4);
q.enqueue(3);
cout<<"queue is empty "<<q.isempty()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;



}