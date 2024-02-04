#include<iostream>
using namespace std;
void merge(int *arr, int s , int e ){
   int  mid = s+(e-s)/2;
   int len1 = mid - s +1 ;
   int len2 = e - mid ;
   int mainArrayIndex = s;
   int index1 = 0;
   int index2 = 0; 
   mainArrayIndex = s;
   while(index1 < len1 && index2 < len2){
   if(first[index1] < second[index2]){
   arr[mainArrayIndex++] =first[index1++];
   }else{
    arr[mainArrayIndex++] =second[index2++];
   }
   }
   while(index1 < len1){
    arr[mainArrayIndex++] =first[index1++];
   }
   while(index2 < len2){
    arr[mainArrayIndex++] =second[index2++];
   }
}
void mergeSort(int *arr, int s ,int e){
    if(s>=e){
    return;
}
    int mid = s+(e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1 ,e);
    merge(arr, s, e);
}
int main(){
 int arr[10]= {2,5,1,6,9,34,5,6,4,2};
    int n =10;
    mergeSort(arr, 0, n-1);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}