#include<iostream>
using namespace std;
void updateAlt(int arr[],int size){
    int a;
    for(int i=0; i<size-1; i+=2){
     a=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=a;
    }
}
void printArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main(){
int arr[9]={1,2,3,4,5,6,7,8,9};
    printArr(arr,9);
    updateAlt(arr,9);
    printArr(arr,9);
}