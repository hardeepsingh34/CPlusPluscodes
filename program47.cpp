#include<iostream>
using namespace std;
int AP(int a){
    int ans= 3*a+7;
    return ans;
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<n<<"th term of given ap is :"<<AP(n)<<endl;

}