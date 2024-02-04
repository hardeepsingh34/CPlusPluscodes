#include<iostream>
using namespace std;
inline int getmax(int& a, int& b){
    return (a>b)? a:b;

}
int main(){
int a =1, b =2;
cout<<"greater is "<<getmax(a,b)<<endl;

}