#include<iostream>
using namespace std;
int main(){
    // pattern question 2
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(i-1)*n+j<<"  ";
        }
        cout<<endl;
    }

}