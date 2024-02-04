#include<iostream>
using namespace std;
int pow(int a, int b){
    int c=1;
    for(int i =1; i<=b; i++){
      c= c*a;
    }
    return c;
}
int binary(int n){
    int ans = 0, bns =0 , cns =0 , dns=0 , ens =0 , c , a , count = 0 , b , x;
    bool bl =0;

    if(n<0){
        a = ~n;
        x=0;
        cout<<n;
    }else{
        x=1;
         a = n;
    }
      
    while(a!=0){
      
        b= (a&1);
        a=(a>>1);
        if(a<-2147483648||a>2147483648){
       bl=1;}
       if(b==0){
        c= 1;
       }else{
        c=0;
       }
       if(x==1){
        c=b;
       }
       // printing 32 bits
       if(count<7){
         ans = ans + (c*pow(10,count)); 
       }
        else if((count>=7) && (count<14)){
        bns = bns + (c*pow(10,(count-7)));
       } 
       else if((count>=14) && (count<21)){
        cns = cns + (c*pow(10,(count-14)));
       } 
       else if((count >=21) && (count <28)){
        dns = dns + (c*pow(10,(count-21))); 
       }else{
        ens = ens + (c*pow(10,(count-28)));
       }
        count = count +1;
    }
    cout<<count<<endl;
   if(x==0){
    cout<<"1";
   }
    for(int i = count; i<31; i++){
        if (x==0){
             cout<<"1";
    }else{
        cout<<"0";
    }
    }
if(x==0){
    cout<<"0";}
   if(bl ==0){
      if(count>=28){
      cout<<ens<<dns<<cns<<bns<<ans;
}else if((count >=21)){
cout<<dns<<cns<<bns<<ans;
} else if((count>=14) ){
cout<<cns<<bns<<ans;
} else if((count>=7) ){
 cout<<bns<<ans;
}else{
    cout<<ans<<endl;
}
   }else{
    cout<< "0"<<endl;
   }
    
}
int main(){
    int n; 
    int x;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<n<<endl;
     binary(n);
     int a = (n>>1);
     cout<<"value of a:"<<a<<endl;
    binary(a);
   
    
}