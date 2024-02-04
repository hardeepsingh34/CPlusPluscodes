#include<iostream>
using namespace std;
int setbit(int a){
    int b, count =0;
    while(a!=0){
        b=a&1;
        a= a>>1;
        if(b==1){
            count = count +1;
        }
    }
    return count;
}
int main(){
    int a,b,c;
    cout<<"enter two nubmer"<<endl;
    cin>>a>>b;
   c= setbit(a)+setbit(b);
   cout<<"number of set bit in a and b is :"<<c<<endl;

}