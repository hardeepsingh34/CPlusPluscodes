#include<iostream>
using namespace std;
int main(){
    // to determine the given number is prime or not.
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    bool bl = 0;
    for(int i=2;i<n; i++){
       if(n%i==0){
        bl =1;
       }
       }
       if(bl==0){
        cout<<"given number is prime"<<endl;
       }else{
        cout<<"given number is not prime"<<endl;
       }
}