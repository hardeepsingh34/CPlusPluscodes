#include<iostream>
using namespace std;
int main(){
   int r;
   cout<<"enter radius of circle"<<endl;
   cin>>r;
   for(int x =0; x<=r; x++){
    int i = (r*r)-0.7*(x*x);
    int s= r-i;
    cout<<i;
      for(int y=0; y<=i; y++ ){

           cout<<".";
      }
      cout<<"*"<<endl;
    }
}