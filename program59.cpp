#include<iostream>
using namespace std;
void printArr(int arr[],int size){
for(int i=0; i<size; i++){
    cout<<arr[i]<<"  ";
}
}
void inputArr(int arr[],int size){
    cout<<"provide "<<size <<" inputs "<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}
}
int linearSearch(int arr[],int a,int size, int key){
    int count=0;
    for(int i=a; i<size; i++){
        if(arr[i]==key){
            count = count +1;
        }
    }
   return count;
}
int main(){
    int n;
    cout<<"enter the number of input you want to provide"<<endl;
    cin>>n;
    int a,dost[50],brr[50], count=0,x=0,b;
    int arr[100];
    inputArr(arr,n);
     for(int i=0; i<n; i++){
    a=i;
  if((linearSearch(arr ,0, n, a))==2){
   dost[count]= i;
   count=count +1;
}
} 

printArr(dost , count);
    
}