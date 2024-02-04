
#include<iostream>
using namespace std;
int main(){
    //pattern 7
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<i-j+1;
        }
        cout<<endl;
}
}