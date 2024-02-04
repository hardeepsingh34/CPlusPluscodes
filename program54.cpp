#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int reverseArr(int arr[],int size){
    int n= size/2;
    int ans;
    for(int i=0; i<n; i++){
     ans=arr[i];
     arr[i]=arr[size-i-1];
     arr[size-i-1]=ans;
    }
}
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    printArr(arr,9);
    reverseArr(arr,9);
    printArr(arr,9);
}