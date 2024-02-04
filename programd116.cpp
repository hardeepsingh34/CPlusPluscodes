#include<iostream>
using namespace std;
// polymorphism
// function overloading 
class A{
    public:
    void sayhello(){
        cout<<"hello love babber "<<endl;
    }
    int sayhello(string name , int n){
        cout<<"hello world"<<endl;
        return n;
    }
    void sayhello(string name){
        cout<<"hello hardeep "<<endl;
    }
};
int main(){
A obj;
obj.sayhello();
obj.sayhello("har",10);
obj.sayhello("har");
}