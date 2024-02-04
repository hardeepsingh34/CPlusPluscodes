#include<iostream>
using namespace std;
int main() {
  //pattern printing counting in square
  int n, i=1;
  cout<<"enter a number"<<endl;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=n){
        cout<<(i-1)*n + j <<"  " ;
        j=j+1;
    }
    i=i+1;
    cout<<endl;
  }
}
