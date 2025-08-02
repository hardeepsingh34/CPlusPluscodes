/*STACK
stack is LIFO form data structure 
means Last In First Out 
#various opration#
push- To insert element on top of stack:
pop- To delete top element of stack:
peek/top- To access Top element of Stack
isempty- check weather the given stack is empty or full */
// Implementation of Stack:
#include<iostream>
using namespace std;
class stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    //behaviours
    stack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(top-size < 1){
            top++;
            arr[top]= data; 
        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>= 0){
           top--; 
        }else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
         return arr[top];
        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top>=0){
            return 0;
        }else{
            return -1;
        }
    }
};
int main(){
    stack st(10);
    st.push(14);
    st.push(13);
    st.push(10);
    st.push(3);
    cout<<st.peek()<<endl;
     st.pop(); 
    cout<<st.peek()<<endl;
     st.pop(); 
    cout<<st.peek()<<endl;
     st.pop(); 
    cout<<st.peek()<<endl;      
}