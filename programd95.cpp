#include<iostream> 
using namespace std;
int power(int a, int b){
    cout<<" b "<<b<<" ";
    if(b==0){
        return 1;
    }
     if(b==1){
        return a;
     }
    
     int ans = power(a, b/2); 
     cout<<ans<<endl;
     if(b%2 == 0){
        return ans*ans;
     }else if(b%2==1){
        return a*ans*ans;
     }
}
int main(){
 int a, b;
 cout<<"enter  a number "<<endl;
 cin>>a;
 cout<<"enter the power of number "<<endl;
 cin>>b;
 cout<<power(a,b);
}