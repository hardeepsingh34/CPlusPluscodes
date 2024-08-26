#include<iostream>
using namespace std;
int peak(int arr[],int size){
    int s=0;
    int e=size-1;
    int m;
    while(s<=e){
        cout<<"0";
        m=s+(e-s)/2;
        if(arr[m]>arr[m+1] && arr[m]>arr[m-1]){
            return m;
        }
        else if(arr[m]<arr[m+1]){
            s=m+1;
        }else if(arr[m]>arr[m+1]){
            e=m-1;
        }
    }
}
int main(){
    int arr[15]={1,2,4,5,6,7,9,10,11,5,4,2,1,0,-1};
    cout<<peak(arr, 15);
}