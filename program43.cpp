#include<iostream>
using namespace std;
bool Even(int a){
    if(a%2==0){
     return 1;
    }
    return 0;
}
int main(){
int n; 
cout<<"enter a number "<<endl;
cin>>n;
cout<<Even(n)<<endl;
}