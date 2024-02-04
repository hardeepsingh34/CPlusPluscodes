#include<iostream>
using namespace std;
int main(){
    // Genric pointer || void pointer
    void * ptr;
int *ptrx, x =10 , y;
char ch= 'a';
float f = 34.3;
ptrx= &x;
y= *ptrx;
ptr = &x;
cout<<" Genric pointer of int type is "<<(*(int *)ptr)<<endl;
ptr= &ch;
cout<<" Genric pointer of char type is "<<(*(char*)ptr)<<endl;
ptr =&f;
cout<<" Genric pointer of float type is "<<(*(float*)ptr)<<endl;
float l = (*(float*)ptr);
cout<<l<<endl;
}