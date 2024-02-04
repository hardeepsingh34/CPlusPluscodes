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
    int ans = 0,bns =0 ,cns =0 , dns=0,ens =0;
    bool bl =0;
      
    while(a!=0){
         b= (a&1);
        a=(a>>1);
        if(a<-2147483648||a>2147483648){
       bl=1;}
       // printing 32 bits
       if(count<7){
         ans = ans + (b*pow(10,count)); 
       }
        else if((count>=7) && (count<14)){
        bns = bns + (b*pow(10,(count-7)));
       } 
       else if((count >=14) && (count <21)){
        cns = cns + (b*pow(10,(count-14)));
       } 
       else if((count >=21) && (count <28)){
        dns = dns + (b*pow(10,(count-21))); 
       }else{
        ens = ens + (b*pow(10,(count-28)));
       }
        count = count +1;
    }
   if(bl ==0){
      cout<<ens<<dns<<cns<<bns<<ans<<endl;
   }else{
    cout<< "0"<<endl;
   }
    
}
int main(){
    int n,c;
    cout<<"enter a number"<<endl;
    cin>>n;
    int count =0;
    int a=n;
    binary(n);
    while(n!=0){
        c = n&1;
        n = n>>1;
        if(c==1){
            count = count +1;
        }
    }
   cout<<"number of 1 in " <<a<<" is : "<<count<<endl;
}