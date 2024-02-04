#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;
}
int mergeArr(int arr1[], int n, int arr2[], int m , int arr3[]){
int i =0,j=0 ,k=0;
while(j<n && k<m){
    cout<<"0";
    if(arr1[j]==0){
        j++;
        if(arr2[k] !=0){
            arr3[i++]=arr2[k++];
        }else{
            break;
        }
    }
    else if(arr2[k] ==0){
        k++;
        if(arr1[j]!=0){
          arr3[i++]=arr1[j++];
        }
        }
    if(arr1[j]<arr2[k] && arr1[j]!=0 ){
     arr3[i++]=arr1[j++];
    }
    else if( arr1[j] >= arr2[k] && arr2[k]!=0 ) {
     arr3[i++]=arr2[k++];
    }
}
return i;
}
int main(){
 int arr1[6]={1,2,3,9,0,0};
 int arr2[7]={2,5,6,7,8,0,0};
 int arr3[13];
int n = mergeArr(arr1,6, arr2,7, arr3);
cout<<n<<endl;
printArr(arr3,n);
}