#include<iostream>
using namespace std;
int pow(int a, int b){
    int c=1;
    for(int i =1; i<=b; i++){
      c= c*a;
    }
    return c;
}
int binary(int a){
    int b;
    int count=0;
    int ans = 0;
    while(a!=0){
        b= (a&1);
        a=(a>>1);
         ans = ans + (b*pow(10,count)); 
        count = count +1;

    }
    return ans;
}
int main(){
    int a =4; 
    int b =6;
    cout<<"hello"<<endl;
    cout<<binary(a)<<endl;
    cout<<binary(b)<<endl;
    cout<<(a&b)<<endl;
    cout<<binary(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<binary(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(~b)<<endl; 
    cout<<(a^b)<<endl;
    cout<<binary(a^b)<<endl;
    cout<<(17>>2)<<endl;
    cout<<binary(17)<<endl;
    cout<<binary(17>>2)<<endl;
    cout<<(19<<2)<<endl;
    cout<<binary(19)<<endl;
    cout<<binary(19<<2)<<endl;
}