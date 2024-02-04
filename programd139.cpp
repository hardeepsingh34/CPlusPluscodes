#include<iostream>
using namespace std;
class TwoStack{
    int * arr;
    int top1;
    int top2;
    int size;
    public:
    //Initialize TwoStack
    TwoStack(int size){
        this->size= size;
        arr = new int[size];
        top1= -1;
        top2 = size;
    }
    void push1(int data){
        if(top2-top1 >1){
            top1++;
            arr[top1]= data;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    void push2(int data){
        if(top2-top1 >1){
            top2--;
            arr[top2]=data;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    int pop1(){
      if(top1>=0) {
        int d;
        d= arr[top1];
        top1--;
        return d;}
        else{
            cout<<"stack underflow for top1"<<endl;
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int d;
            d = arr[top2];
            top2++;
            return d;
        }else{
            cout<<"stack underflow for top2"<<endl;
            return -1;
        }
    }
};
int main(){
TwoStack st(10);
st.push1(12);
st.push1(67);
st.push2(234);
st.push2(21);
st.push1(12);
st.push1(67);
st.push2(234);
st.push2(21);
st.push1(12);
st.push1(67);
cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;
}