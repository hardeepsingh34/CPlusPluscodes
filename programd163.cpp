#include<iostream>
using namespace std; 
class kQueue{
    int n;
    int k;
    int *front;
    int * rear;
    int * arr;
    int freespot;
    int *next;
    public:
    void printarr(){
        for(int i =0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    kQueue(int n, int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for(int i =0; i<k; i++){
            front[i]=-1;
            rear[i] =-1;
        }
        next = new int[n];
        for(int i =0; i<n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
        arr = new int[n];
        freespot =0;
    }
    void enqueue( int data, int qn){
        // overflow
        if(freespot == -1){
            cout<<"No empty space is present "<<endl;
            return;
        }
        //find first free index
    int index = freespot;
    // update freespot
    freespot = next[index];

    //check weather first element
    if(front[qn-1] == -1){
        front[qn-1] = index;
    }else{
        //link new element to the prev element
        next[rear[qn-1]]= index;
    }
    //update next 
    next[index] = -1;
    //update rear
    rear[qn-1] = index;
    //push element
    arr[index] =data;
    }
    int dequeue(int qn){
        // underflow
        if(front[qn-1] == -1){
            cout<<"queue underflow "<<endl;
            return -1;
        }
        // find index to pop
        int index = front[qn-1];
        
        // front ko aage badhao
        front[qn-1] = next[index];

        // freespot ko manage karo
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
    
};
int main(){
kQueue q(6, 3);
q.enqueue(75,1);
q.enqueue(4, 3);
q.enqueue(43,3);
q.enqueue(53,1);
q.printarr();
q.enqueue(12, 2);
q.enqueue(32,2);
q.enqueue(23,1);
q.printarr();

}