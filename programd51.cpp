#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
   int compress(vector<char>& chars) {
           int ansindex =0;
    int n=chars.size();
    int i=0;
    while( i<n ){
        int b=i+1;
        while(chars[i]==chars[b] && b<n ){
        b++;
        }
        chars[ansindex++]=chars[i];
        int count =b-i;
         if(count>1){
            string ans = to_string(count);
            for(char ch:ans){
                chars[ansindex++] = ch ;
            }
         }
         i=b;  
    }
    return ansindex; 
    }
int main(){
      vector<char>s;
      cout<<"enter a string "<<endl;
     s={'a' , 'a' , 'b' ,'b' , 'c' , 'c' , 'c'};
      int n=compress(s);
      cout<<n<<endl;
      for(int i=0; i<n;i++){  
        cout<<s[i];             
      }
}
