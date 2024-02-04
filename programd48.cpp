#include<iostream>
using namespace std;
void replacespace(string &a){
   int n= a.length();
   char b,c,d,e;
   for(int i=0; i<n; i++){
    if(a[i]==' '){
       a[i]='@';
       n=n+2;
       a.push_back('1');
       a.push_back('2');
       for(int j=n; j>i+2; j -=2){
          a[j]=a[j-2];
          a[j-1]=a[j-3];
       }    
       a[i+1]='4';
       a[i+2]='0'; 
    }
    }
}
int main(){
    string a ;
   
    cout<<"enter a string with spaces"<<endl;
    getline(cin,a);
    replacespace(a);
    cout<<a;
}