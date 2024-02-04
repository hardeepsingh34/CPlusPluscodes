#include<iostream>
using namespace std;
int tempSqu(int a){
    int s=1;
    int e=a-1;
    int m;
    int ans;
    while (s<=e){
      m=s+(e-s)/2;
     
      if(m*m==a){
        return m;
      }else if(m*m<a){
        ans=m;
            s=m+1;
        }else {
            
            e=m-1;
        }
    }
    return ans;
}
double precision(int a , int precision , int tempr){
    double factor=1 , ans =tempr;
    for(int i=1; i<=precision; i++){
        cout<<"0";
        factor = factor/10;
        cout<<factor<<endl;
        while( ans*ans<a){
            ans = ans+factor;
        }
        ans =ans-factor;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int a =tempSqu(n);
cout<<precision(n,10,a)<<endl;
}