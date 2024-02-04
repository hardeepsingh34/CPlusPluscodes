#include<iostream>
using namespace std;
int modularExponentiation(int x, int n, int m){
    int res =1;
    while(n>0){
        if(n&1){
        res =(1ll*res*x%m)%m;
    }
    x=(1ll*x%m*x%m)%m;
    n=n>>1;
}
return res;
}
int main(){
int a, b,c;
cout<<"enter three numbers "<<endl;
cin>>a>>b>>c;
cout<<modularExponentiation(a,b,c);
}