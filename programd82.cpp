#include<iostream>
using namespace std;
int power(int n){
if(n==0){
    return 1;
}
int ans;
ans = 2*power(n-1);
return ans;
}
int main(){
int n ;
cout<<"enter a number "<<endl;
cin>>n;
cout<<power(n);
}