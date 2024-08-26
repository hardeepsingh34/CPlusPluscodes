#include<iostream>
using namespace std;
 //string removeDuplicates(string s) {
       // for(int i=0; i<s.length(); i++){
          //  int a=i; 
           // int b=i+1;
       // while( s[a]==s[b] ){
           // cout<<"a "<<a<<"  b "<<b<<endl;
        //    s.erase(s.begin()+a);
          //  b--;
           /// s.erase(s.begin()+b);
          //  a--;
           
       // }
       // }
    //   return s;
  //  } 
   string removeDuplicates(string s) {
        for(int i=0; i<s.length(); i++){
            int a=i; 
            int b=i+1;
           
       if(s[a]==s[b]){
         cout<<a<<b;
      
           s.erase(a,2);
           i=i-1;
        }
    }
    return s;
    }
    int main(){
        string s ;
        cout<<"enter  a string "<<endl;
        cin>>s;
         cout<<removeDuplicates(s); 
         //s.erase(1,2);
         //s.erase(s.begin()+2);
        // cout<<s;
    }