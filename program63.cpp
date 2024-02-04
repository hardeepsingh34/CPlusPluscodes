#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}
void sortOne(int arr[], int size){
     int left =0;
     int a;
     int right =size -1;
     while(left < right){
       while((arr[left])==0){
         left++;
       }
       while(arr[right]==1){
         right--;
       }
       if(left<right){
        a= arr[left];
        arr[left]=arr[right];
        arr[right]=a;
        left++;
        right--;
       }
     }
}
int main(){
    int arr[7]={0,1,0,0,1,1,0};
    sortOne(arr, 7);
    printArr(arr,7);
}