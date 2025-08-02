#include<iostream>
using namespace std;
void update(int **p2){
    *p2 = *p2 +1;
}
int main(){
    int i =5;
     int *p = &i;
     int **p2 = &p; 
    cout<<"before "<<*p<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"after "<<*p<<endl;
    cout<<p<<endl;
    cout<< "this is pointer of pointer"<<endl;
    cout<<p2<<endl;
}