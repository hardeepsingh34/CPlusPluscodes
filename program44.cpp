#include<iostream>
using namespace std;
int factorial(int a){
    int ans=1;
    for(int i =1; i<=a; i++){
        ans = ans*i;
    }
    return ans;
}
int main(){
int n , r;
cout<< "enter the value of n and r for nCr:"<<endl;
cin>>n>>r;
int denom, nume ,ans;
denom =  factorial(r)*factorial(n-r);
nume = factorial(n);
ans = nume/ denom;
cout<<nume<<endl;
cout<<denom<<endl;
cout<< "answer is : "<< ans<<endl;
}