#include<iostream>
using namespace std;
int main(){
    // fibonacci series
    int a =0; 
    int b =1;
    int n,c;
    cout<<"enter  a number"<<endl;
    cin>>n;
    cout<<" "<<a<<"  "<<b<<" ";
    for(int i=2; i<n; i++){
       c= a+b;
       a=b;
       b=c;
       cout<<" "<<c<<" "; 
    }
}