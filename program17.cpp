#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"enter any number";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch = 'A'+i-1;
            cout<<ch<<"  ";
        }
        cout<<endl;
    }
}