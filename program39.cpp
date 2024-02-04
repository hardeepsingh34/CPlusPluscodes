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
     cout<<"a"<<endl;
    int count=0;
    int ans = 0,bns =0 ,cns =0 , dns=0,ens =0 , c;
    bool bl, ch=0;
    if(a<0){
        a = -a;
        bl =0;
    }else{
        bl=1;
    } 
     if(a<-2147483648||a>2147483648){
            
       }

    while(count<32){
         b= (a&1);
        a=(a>>1);
        // 1s compliment.
        if(bl==0){
            if(b==1){
                c=0;
            }else{
                c=1;
            }
        }else{
            c=b;   
        }
        //2s compliment.
        if(bl==0){
        while(ch==0){
            if(c==1){
                c=0;
                break;
            }else{
                c=1;
                ch=1;
            }
        }
        }
       // printing 32 bits
       if(count<7){
         ans = ans + (c*pow(10,count)); 
       }
        else if((count>=7) && (count<14)){
        bns = bns + (c*pow(10,(count-7)));
       } 
       else if((count >=14) && (count <21)){
        cns = cns + (c*pow(10,(count-14)));
       } 
       else if((count >=21) && (count <28)){
        dns = dns + (c*pow(10,(count-21))); 
       }else{
        ens = ens + (c*pow(10,(count-28)));
       }
        count = count +1;
    }
   
     cout<<ens<<dns<<cns<<bns<<ans<<endl;
 
}

int main(){
    int n;
    cout<<"enter  a number"<<endl;
    cin>>n;
binary(n);
cout<<"hello";

}