#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int ans =0;
    for(int i=1; n!=0; i++){
      int digit = n%10;
      if((ans< -214657331) || (ans > 482664174/10)){
        cout<<"0"<<endl;
        return 0;
      }else{
        ans = ans*10 + digit;
        n=n/10;
      }
    }
    cout<<"reverse of number is "<<ans<<endl;
}