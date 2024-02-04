#include<iostream>
using namespace std;
int factorial(int n){
    int ans;
    if(n==0){
        return 1;
    }
    ans = n*factorial(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
   cout<< factorial(n);
}