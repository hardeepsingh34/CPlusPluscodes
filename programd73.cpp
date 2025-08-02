#include<iostream>
using namespace std;
int main(){
    int arr[]={11,21,31,41};
   // int *ptr = arr++;
   // cout<< *ptr <<endl;
   char ch  = 'a';
   char *ptr = &ch;
   ch++;
   cout<<*ptr<<endl;
   char c[]= "babbar";
   char *p = c;
   cout<<c[0]<<" "<<p[0]<<endl;
   int i = 10; 
   int  *p2 = &i;
   *p2 = (*p2)*2;
   cout<<i<<endl;
   cout<<c;
}