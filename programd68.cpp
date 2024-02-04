#include<iostream>
using namespace std;
void increment(int **p ){
    ++(**p);
}
int main(){
int first = 110;
int *p = &first;
int **p2 = &p;
increment(&p);
cout<<first<<endl;
int second = ++(**p2);
int *r  = *p2;
++(*r);
cout<<first<< " "<<second <<endl;
}