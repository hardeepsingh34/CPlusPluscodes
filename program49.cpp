#include<iostream>
using namespace std;
void fibonacci(int n){
    int a=0,b=1,c;
    cout<<a<<endl;
     cout<<b<<endl;
     for(int i =2; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
     }

}
int main(){
    int n; 
    cout<<"enter a number"<<endl;
    cin>>n;
    fibonacci(n);
}