#include<iostream>
using namespace std;
int main(){
//    int n=5;
//     cout<<&n<<endl;
//     int *p= &n;
//     int *a = &n;
//     int **b= &p;
//     cout<<p<<endl; 
//     cout<<&p<<endl;
//     cout<<*a<<endl;
//     cout<<**b<<endl;
//     cout<<"size of pointer is "<<sizeof(p)<<endl;
//     cout<<"size of int is "<<sizeof(n)<<endl;
    int n;
    int *p = &n;
    cout<<*p<<endl;
    cout<<p<<endl;
    int *ptr =0;
    int i=4;
    ptr=&i;
    cout<<ptr;


}