#include<iostream>
using namespace std;
void PrintArr(int arr[], int n){
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void insertionsort(int arr[], int n, int s=1){
       if(s==n){
        return;
       }
       int j = s-1;
       int temp = arr[s];
       for(; j>=0; j--){
        if(arr[j]>temp){
            arr[j+1] = arr[j];
        }else{
            break;
        }
       }
       arr[j+1] =temp;
       insertionsort(arr, n ,s+1);
}
int main(){
    int arr[10]={300,5,6,4,6,74,4,76,10000,100};
insertionsort(arr,10);
PrintArr(arr,10);
}