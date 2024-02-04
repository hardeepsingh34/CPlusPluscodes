#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number";
    cin>>n;
    for(int i=1; i<=n+1; i++){
        for(int j=2; j<=i; j++){
           
            cout<<"   "; 
         }
        for(int j=1; j<=n-i+1; j++){
            cout<<" "<< j+i-1<<" " ;
        }
        cout<<endl;
    }
}