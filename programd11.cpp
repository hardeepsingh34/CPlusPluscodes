#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int a = n;
    while(a!=1){
        n =  n/2;
        a = n ;
        cout<<"run"<<endl;
    }
    if(n==1){
        cout<<"given number can be written as a power of 2"<<endl;
    }else{
        cout<<"given number cannot be written as a power of 2"<<endl;
    }
}