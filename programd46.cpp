#include<iostream>
using namespace std;
int getlength(char length[]){
    int count =0;
    for(int i=0 ; length[i] != '\0'; i++){
        count++;
    }
    return count;
}
char maxoccur(char a[]){
  int n= getlength(a);
   int ans,c=0;
   for(int i=0; i<n; i++){
    int count =0;
    for(int j=i; j<n; j++){
      if(a[i]==a[j]){
      count++;
      }
      cout<<"0";
    }
    if(count>c){
        c=count;
        ans = a[i];
    }
   }
   return ans;
}
int main(){
    char a[20];
    cout<<"enter a letter "<<endl;
    cin>>a;
    cout<<maxoccur(a)<<endl;
}