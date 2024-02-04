#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the sides of triangle"<<endl;
    cin>>a>>b>>c;
    if(a>=b+c || b>=a+c || c>=a+b){
        cout<<"given triangle is not valid"<<endl;
    }else{
        cout<<"given triangle is valid"<<endl;
    }
}