#include<iostream>
using namespace std;
/*
Defining a global variable :-
*/
#define Pi 3.14
int main(){
    int n;
    cout<<"enter the radius "<<endl;
    cin>>n;
    int area = Pi*n*n;
    cout<<"area is "<<area<<endl;
}