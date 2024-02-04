#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    for(int i =1; i<=n+1; i++){
        for(int j =1; j<=n+1; j++){
            if(j<=n-i+1){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
            }
        cout<<endl;
    }
}
