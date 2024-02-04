#include<iostream>
using namespace std;
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
    int a;
    cout<<"hello"<<endl;
    int arr[11]={4,3,4,3,2,5,5,5,67,67,6};
for(int i=0; i<11; i++){
    a=arr[i];
  if((linearSearch(arr , 11, a))==1){
  cout<<arr[i]<<endl;
}
}
}