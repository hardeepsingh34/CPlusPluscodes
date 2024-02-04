#include<iostream>
#include<algorithm>
using namespace std;
void PrintArr(int arr[], int n){
    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void bubblesort(int arr[], int n){
    if(n == 0 ||n ==1 ){
        return ;
    }
    for(int i = 0 ; i<n-1 ; i++ ){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr, n-1);
}
int main(){
    int arr[10]={3,5,6,4,6,74,4,76,1,100};
    bubblesort(arr, 10);
    PrintArr(arr,10);
}