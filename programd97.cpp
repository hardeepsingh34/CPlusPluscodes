#include<iostream>
#include<algorithm>
using namespace std;
void PrintArr(int arr[], int n){
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void selectionsort( int arr[], int n){
    if( n==1||n ==0){
      return;
    }
    for(int i = 0; i<n; i++ ){
        if(arr[0]> arr[i]){
         swap(arr[0], arr[i]);
        }
    }
    selectionsort(arr+1,n-1);
}
int main(){
int arr[10]={300,5,6,4,6,74,4,76,1,100};
selectionsort(arr,10);
PrintArr(arr,10);
}