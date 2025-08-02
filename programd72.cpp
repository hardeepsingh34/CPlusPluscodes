#include<iostream>
using namespace std;
int main(){
    int  arr[4];
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr =p;
    cout<< *ptr <<" "<<f<<" "<<p<<endl;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
    cout<<(arr +1)<<endl;
}