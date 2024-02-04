#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    bool bl =1 ;
    for(int i=2; i<n; i++){
        if(n%2==0){
            cout<<"given number is not prime"<<endl;
            bl =0;
            break;
        }
        
        }
        if(bl==1){
            cout<<"given number is prime"<<endl;
    }  
}