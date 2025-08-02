#include<iostream>
using namespace std;
int main(){
    int first = 8;
    int *ptr2= &first;
    int second = 18;
    int *ptr = &second;
    *ptr =9;
    *ptr2 =100;
    cout<<first<<" "<<second<<endl;
}