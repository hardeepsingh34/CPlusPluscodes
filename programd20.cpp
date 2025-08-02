#include<iostream>
using namespace std;
//selection sort.
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
      cout<<arr[i]<<"  ";
    }
}
void selectionSort(int arr[], int n){
    int ans;
    cout<<"before selection sort"<<endl;
    for(int i=0; i<n-1; i++){
       for(int j=i; j<n; j++){
        if(arr[i]>arr[j]){
         ans = arr[i];
         arr[i]=arr[j];
         arr[j]=ans;
       }  
       }
       printArr(arr, n);
       cout<<endl;
    }

    cout<<"after selection sort final answer is : "<<endl;
    
}
int main(){
 int arr[6]={2,4,6,3,1,5};
 selectionSort(arr ,6);
 printArr(arr , 6);
}