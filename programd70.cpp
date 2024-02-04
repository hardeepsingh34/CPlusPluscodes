#include<iostream>
using namespace std;

int main(){
    int *ptr = 0;
    int first =110;
    ptr = &first;
    cout<<*ptr<<endl;

int first1 =6;
int *p =&first1;
int *q = p;
(*q)++;
cout<<first1<<endl;
}