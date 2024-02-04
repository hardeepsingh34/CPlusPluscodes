#include<iostream>
using namespace std;
int binarySearch(int arr[],int start, int size ,int key){
     int  s=start;
      int e=size-1;
      int  m;
        while (s<=e){
            m=(s+e)/2;
            if(arr[m]==key){
                return m;
            }else if(key<arr[m]){
             e= m-1;
            }else if(key>arr[m]){
                s=m+1;
            }
        }
        return -1;
    }
int pivot(int arr[], int size){
    int s=0;
    int e=size -1;
    int m;
    while(s<e){
        cout<<"0";
        m=s+(e-s)/2;
            
       if(arr[m]>arr[m-1]){
          s= m+1;
        }else{
            e=m-1;
        }
    }
    return s;
}
int search(int arr[], int size , int key){
int a=pivot(arr,5);
if(key<arr[0]){
   return binarySearch(arr,a,5,key);
}else{
    return binarySearch(arr,0,a,key);
}
}
int main(){
    int arr[5]={8,9,10,11,3};
    cout<<search(arr,5,3);
}