#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n, int key){
    int s =0;
    if(n<s){
        return 0;
    }
    int m = s+(n-s)/2;
    if(arr[m]==key){
        return 1;
    }else if( arr[m]<key){
        int a =binarySearch(arr+m+1 ,n-m-1 , key);
        return a;
    }else{
        int b =binarySearch(arr,n-m-1, key);
        return b;
    }
}
int main(){
int arr[11]={1,3,4,5,6,7,8,20,30,50,200};
cout<<binarySearch(arr,11,30);
}