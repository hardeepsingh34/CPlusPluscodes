#include<iostream>
using namespace std;
bool ispossible(int arr[], int n ,int k , int mid){
     int boardsum=0;
     int painterCount= 1;
     for( int i=0 ; i<n; i ++){
        if(boardsum+ arr[i]<=mid ){
            boardsum += arr[i];
        }else{
            painterCount++;
            if(painterCount>k ||arr[i]>mid){
                return false;
            }  
          boardsum =arr[i];
        }
     }
     return true;
}
int allocateboard(int arr[], int n, int k ){
    int s= 0; 
    int sum =0;
    for(int i=0; i<n ; i++){
        sum += arr[i];
    }
    int e =sum;
    int mid ,ans=-1;
    while(s<=e){
        mid = s+(e-s)/2;
        if(ispossible(arr ,n , k, mid)){ 
            ans = mid;
          e = mid -1;
        }else{
            s = mid +1;
        }
    }
    return ans;
}
int main(){
    int arr[5]={ 10,20,30,40,50};
    cout<<allocateboard(arr , 5, 3 );
}