#include<iostream>
using namespace std;
void printArr(int arr[],int size){
for(int i=0; i<size; i++){
    cout<<arr[i]<<"  ";
}
}
int linearSearch(int arr[],int size, int key){
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            count = count +1;
        }
    }
   return count;
}
int main(){
    int a,b,crr[5],c,x=0;
    int arr[10]={1,3,4,53,3,5,2,34,3,2};
    int brr[5]={1,3,3,0,53};
    for(int i=0; i<5; i++){
       a=linearSearch(arr, 10 ,brr[i]);
       b=linearSearch(brr, 5, brr[i]);
         if(a>0 &&b>0){
          crr[x]=brr[i];
          x=x+1;

         }
    }
    printArr(crr,x);
}