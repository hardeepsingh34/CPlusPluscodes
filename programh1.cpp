#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    float c ;
     for(int i =1; i<=n; i= c*c){
        if(i<n/3){
            c = c + 0.2;
        }else if(i<n/2& i>n/3){
            c = c + 0.3;
        }else{
            c = c + 0.7;
        }
     }
       cout<<c<<endl;
    for(int i =n-1; i>=1; i= c*c){
        if(i>n/3){c = c - 0.7;}
        else if(i<n/2& i>n/3){
            c = c - 0.3;
        }
        else{
            c = c - 0.2;
        }
        for(int j= 1; j<=i; j++){
            cout<<" ";
        }
        cout<<".";
       
       for(int j= n-i; j>1; j--){
            cout<<"  ";
        }
        cout<<"."<<endl;
   

    }

    float count=1;
    for(int i =1; i<=n; i= count*count){
        if(i<n/2){
            count = count + 0.3;
        }else if(i<n/2& i>n/3){
            c = c + 0.3;
        }else{
            count = count + 0.7;
        }
        for(int j= 1; j<=i; j++){
            cout<<" ";
        }
        cout<<".";
       
       for(int j= n-i; j>1; j--){
            cout<<"  ";
        }
        if(i<=n){
            cout<<"."<<endl;
           
        }
        
     }
     
  }