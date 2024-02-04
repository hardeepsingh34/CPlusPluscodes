#include<iostream>
using namespace std;
int getlength(char length[]){
    int count =0;
    for(int i=0 ; length[i] != '\0'; i++){
        count++;
    }
    return count;
}
void reverse( char a[],int s, int e){
   
    char b;
    while(s<e){
      b= a[s];
      a[s]= a[e];
      a[e]= b;
      s++;
      e--;
    }
}
void reverseline(char a[]){
  int n = getlength(a);
  int s=0, e=-1;
  for(int i=0; i<=n; i++){
    if(a[i]>='a' && a[i]<='z'|| a[i]>='A' && a[i]<='Z'){
     e++;
    }else{ 
 reverse(a,s,e);
            s=e+2;
            e++;
    }
  }
}
int main(){
     char arr[40];
     cout<<"enter a line "<<endl;
     cin.getline(arr,20);
     reverseline(arr);
     cout<<arr<<endl;
}