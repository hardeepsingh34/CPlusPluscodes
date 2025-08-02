#include<iostream>
using namespace std;
 string removeDuplicates(string s) {
        int n = s.length();
        bool arr[n]={0};
        for(int i=0; i<s.length(); i++){
            int a=i; 
            int b=i+1;
            while(arr[a]!=0 && i>0){
                a--;
            }
            while(arr[b]!=0 && i<s.length()){
                b++;
            }
        while( s[a]==s[b] && arr[a]==0 &&arr[b]==0){
            arr[a]=1;
            arr[b]=1;
        }
        }
        string ans;
        for( int i=0; i<s.length(); i++){
            if(arr[i]==0){
             ans.push_back(s[i]);
            }
        }
        return ans;
    }
    int main(){
        string s ;
        cout<<"enter  a string "<<endl;
        cin>>s;
        s= removeDuplicates(s);
       s.erase(1, 1);
       cout<<s;
    }