#include<iostream>
using namespace std;
int main(){
    int n,a , b ,c ,x;
    cout<<"enter a amount"<<endl;
    cin>>n;
    switch(1){
     case 1:
      a= n/100;
      n= n%100;
      cout<<"notes of 100 required :"<<a<<endl;
      case 2:
      b= n/50;
      n= n%50;
      cout<<"notes of 50 required :"<<b<<endl;
      case 3:
      c= n/30;
      n= n%30;
      cout<<"notes of 30 required :"<<c<<endl;
      case 4 :
      x = n/1;
      cout<<"notes of 1 required :"<<x<<endl;
 }
}