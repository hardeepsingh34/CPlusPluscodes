#include<iostream>
using namespace std;
void sayDigit(int n){
    if(n==0){
        return;
    }
    string arr[]={" zero "," one "," two "," three "," four "," five "," six "," seven "," eight "," nine "};
    int a=n%10;
    n=n/10;
    sayDigit(n);
    cout<<arr[a];
}
int main(){
int n;
cout<<"enter a number "<<endl;
cin>>n;
sayDigit(n);
}