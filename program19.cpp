#include<iostream>
using namespace std;
int main(){
int n, i=1;
    cout<<"enter any number";
    cin>>n;
    int count =0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            count = count +1;
            char ch = 'A'+count-1;
            cout<<ch<<"  ";
        }
        cout<<endl;
    }
}