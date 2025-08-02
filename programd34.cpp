#include<iostream>
#include<vector>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
}
void mergeArr(int arr1[], int n, int arr2[], int m , int arr3[]){
int i =0,j=0 ,k=0;
while(j<n || k<m){
    if(arr1[j]<arr2[k]){
     arr3[i++]=arr1[j++];
    }
    else {
     arr3[i++]=arr2[k++];
    }
}
while(j<n){
    arr3[i++]=arr1[j++];
}
while(k<m){
    arr3[i++]=arr2[k++];
}
}
int main(){
int arr1[5]={1,3,5,7,9};
int arr2[7]={2,4,5,8,10,12,14};
int arr3[12];
mergeArr(arr1 ,5 ,arr2 ,7 ,arr3);
printArr(arr3, 12);

}