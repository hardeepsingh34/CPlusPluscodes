#include<iostream>
using namespace std;
int main(){
    // program to tell given number is negative , positive or zero.
    int n;
    cout<<"enter any  number"<<endl;
    cin>>n;
    if(n<0){
        cout<<"given number is negative"<<endl;   
    }else if(n>0){
        cout<<"given number is positive"<<endl;
    }else{
        cout<<"given number is zero"<<endl;
    }
}
