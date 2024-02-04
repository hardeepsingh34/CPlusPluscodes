#include<iostream>
using namespace std;
int power(int a,int b){
    int ans = 1;
    for(int i=1 ; i<=b; i++){
     ans = ans * a;
    }
    return ans;
}
void printZero(int a, int b){
    for(int i=a; i<b-1; i++){
        cout<<"0";
    }
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int b=0,bns=0,c=1,ans=0,count=0,w=-1;
    while(n!=0){
        int a=n & 1;
        n = n >>1;
        if(a==1){
            bns = bns  +(a* (power(10,count) ));
            ans = ans  +(b*(power(10,count)));
        }else{
                w = count;
            bns = bns +(b*power(10,count));
            ans = ans +(c*power(10,count));
        }
        count = count +1;
    }
    cout<<w<<" "<<count<<endl;
    if(w== -1){
        w=0;
    }
    cout<<"binary conversion of "<< n << " is :"<<bns<<endl;
    cout<<"complement of "<< n <<" is :";
    printZero(w,count);
    cout<<ans<<endl;
   
}