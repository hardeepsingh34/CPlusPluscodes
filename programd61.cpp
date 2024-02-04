#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    while(a!=b){
    if(a<b){
        b=b-a;
    }else{
        a=a-b;
    }}
    return a;
}
int main(){
     int a, b;
     cout<<"enter two numbers "<<endl;
     cin>>a>>b;
     cout<<gcd(a,b);
}