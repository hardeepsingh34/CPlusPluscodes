#include<iostream>
using namespace std;
//bubble sort.
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
      cout<<arr[i]<<"  ";
    }
}
void bubblesort(int arr[], int n){
    cout<<"before bubble sort"<<endl;
    bool bl = 0;
    int a;
   for(int i=0; i<n-1; i++){
   for(int j=0; j<n-1-i; j++){
    if(arr[j]>arr[j+1] ){
       a = arr[j];
       arr[j] = arr[j+1];
       arr[j+1]= a;
       bl = 1;
    }
   }
   if(bl ==0){
    break;
   }
   printArr( arr ,n);
   cout<<endl;
}
cout<<"after bubble sort"<<endl;
}
int main(){
int arr[6]={2,4,6,3,1,5};
 bubblesort(arr ,6);
 printArr(arr , 6);
}