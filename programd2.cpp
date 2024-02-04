#include<iostream>
using namespace std;
int main(){
    // negative positive or zero
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n==0){
        cout<<"given number is zero"<<endl;
    }else if(n>0){
        cout<<"given number is positive"<<endl;
    }else{
        cout<<"given number is negative"<<endl;
    }
}