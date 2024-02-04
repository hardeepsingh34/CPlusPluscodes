#include<iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"enter a number"<<endl;
    cin>>n;
    int sum=0;
    int product=1;
    while(n!=0){
        c=n%10;
        n=n/10;
        sum = sum + c;
        product = product*c;
    }
    cout<<product<<endl;
    cout<<sum<<endl;
    cout<<(product-sum)<<endl;
}