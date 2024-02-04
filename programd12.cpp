#include<iostream>
using namespace std;
int firstdigit(int arr[], int size, int key){
 int s=0;
 int e=size-1;
  int m;
 while(s<=e){
     m=s+(e-s)/2;
 cout<<"0";
     if(arr[m]==key){
       e=m-1;
     }else if(key<arr[m]){
        e=m-1;
     }else if(key>arr[m]){
        s=m+1;
     }
 }
  cout<<"first occurance of given digit is  ";
 return m;
}
int lastdigit(int arr[], int size, int key){
 int s=0;
 int e=size-1;
 int m;
 while(s<=e){
       m=s+(e-s)/2;
 cout<<"0";
     if(arr[m]==key){
       s=m+1;
     }else if(key<arr[m]){
        e=m-1;
     }else if(key>arr[m]){
        s=m+1;
     }
 }
 cout<<"last occurance of given digit is  ";
 return m;
}
int main(){
  int arr[10]={1,2,3,3,3,4,4,4,4,4};
  cout<<firstdigit(arr, 10, 4)<<endl;
  cout<<lastdigit(arr,10,4)<<endl;
}