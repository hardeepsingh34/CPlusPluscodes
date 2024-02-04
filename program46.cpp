#include<iostream>
using namespace std;
int prime(int a){
   bool bl=1;
    for(int i =2; i<a; i++){
        if(a%i==0){
            bl = 0;
        }
    }
    return bl;
}
int main(){
    int n ,x;
    cout<<"enter a number"<<endl;
    cin>>n;
    x = prime(n);
    if(x ==0){
        cout<<"given number is not prime"<<endl;
    }else{
        cout<<"given number is prime"<<endl;
    }
     
}