#include<iostream>
using namespace std;
int main(){
    // program to tell that given letter is uppercase, lowercase or numeral.
    char x;
    cout<<"enter any key"<<endl;
    cin>>x;
    int ch =x ;
    int a= 'a';
    int b= 'z';
    int c ='A';
    cout<<ch<<endl;
    int d ='Z';
    int e = '0';
    int f ='9';
    if(ch<=b&ch>=a){
        cout<<"given letter is lowercase"<<endl;
    }else if(ch<=d&ch>=c){
        cout<<"given letter is uppercase"<<endl;
    }else if(ch<=f&ch>=e){
        cout<<"giver letter is numeric"<<endl;
    }else{
        cout<<"please provide a valid input"<<endl;
    }


}