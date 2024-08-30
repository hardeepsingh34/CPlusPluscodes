#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;
class special_stack{
   stack<int>s;
   int mini= INT_MAX;
   public:
   void push(int data){
    //for first element
    if(s.empty()){
        s.push(data);
        mini= data;
    }else{
        if(data< mini){
            s.push(2*data- mini);
            mini =data;
        }else{
            s.push(data);
        }
    }
   }
   int pop(){
    if(s.empty()){
        return -1;
    }
    int curr = s.top();
    s.pop();
    if(curr>mini){
        return curr;
    }else{
        int prevMin=  mini;
        int val = 2*mini-curr;
        mini = val;
        return prevMin;
    }
   }
   int top(){
      if(s.empty()){
        return -1;
      }
      int curr = s.top();
      if(curr< mini){
        return mini;
      }else{
        return curr;
      }
   }
   bool isEmpty(){
    return s.empty();
   }
   int getMin(){
    if(s.empty())
    return -1;
    return mini;
   }
};
int main(){
   special_stack s;
   s.push(5);
   s.push(3);
   s.push(8);
   s.push(2);
   s.push(9);
   s.push(2);
   cout<<"minimum value in stack is " <<s.getMin()<<endl;
   s.pop();
   cout<<"minimum value in stack is " <<s.getMin()<<endl;
   s.pop();
   cout<<"minimum value in stack is " <<s.getMin()<<endl;
   s.pop();
   cout<<"minimum value in stack is " <<s.getMin()<<endl;
   s.pop();
   cout<<"minimum value in stack is " <<s.getMin()<<endl;
   s.pop();
   cout<<"minimum value in stack is " <<s.getMin()<<endl;
  
}