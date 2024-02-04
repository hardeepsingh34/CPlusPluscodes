#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}
void sortTwo(int arr[],int size){
    int a, b;
     for(int i=0; i<size; i++){
        if(arr[i]==0){
            for(int j=i; j>0; j--){
               a= arr[j];
               arr[j]=arr[j-1];
               arr[j-1]=arr[j];
            }
            } for(int i=0; i<size; i++){
                 if( arr[i]==2){
               for(int j=i; j<size-1; j++){
                b=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=b;
                
               }
            }
     }}
}
int main(){
    int arr[10]={0,2,1,1,2,0,1,2,0,1};
    sortTwo(arr,10);
    printArr(arr, 10);

}