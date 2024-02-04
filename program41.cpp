#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
    char op;
    cout<<"enter the operation you want to perform"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"sum of given numbers is :"<<a+b<<endl;
        break;
        case '-':
        cout<<"diffrence of given numbers is ;"<<a-b<<endl;
         break;
        case '/':
        cout<<"division of given numbers is :"<<a/b<<endl;
         break;
        case '*':
        cout<<"product of given numbers is :"<<a*b<<endl;
         break;
        case '%':
        cout<<"modulus of given numbers is :"<<a%b<<endl;
         break;
        default :
        cout<<"please enter a valid operation."<<endl;
    }
}