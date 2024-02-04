#include<iostream>
using namespace std;
int main(){
    int num =5;
    int a =num;
   // cout<<"a before "<<num<<endl;
//a++;
   // cout<<"a after "<<num<<endl;
    int *p = &num;
    //cout<<"before "<<num<<endl;
    //(*p)++;
    //cout<<"after "<<num<<endl;
    //int *d =p;
   // cout<<"d "<<*d;
    cout<<*p<<endl;
    *p = *p +1;
    cout<<*p<<endl;
    cout<<"p before "<<*p<<endl;
    p=p+1;
    cout<<"p after "<<*p<<endl;

}