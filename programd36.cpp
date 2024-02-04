#include<iostream>
#include<vector>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
}
void moveZeros(int arr[],int n){
    int j= 0;
   for(int i=0; i<n; i++){
    if(arr[i]!=0){
        arr[j]=arr[i];
        j++;
        arr[i]=0;
    }
   }
}
int main(){
int arr[10] ={0,1,0,3,12,0,0,3,17,9};
moveZeros(arr,10);
printArr(arr,10);
}