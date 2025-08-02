#include<iostream>
using namespace std;
bool ispossible(int stall[], int size ,int k, int mid){
 int cowcount =1;
 int lastpos = stall[0];
 for(int i=0; i<size; i++){
    if(stall[i] -lastpos >=mid){
         cowcount++;
      if(cowcount==k){
 
        return true;
      }
      lastpos = stall[i];
    }
   }
    return false;
   
} 
int aggresiveCow( int arr[], int size,int k){
    int s=0;
    int a = -1;
    for(int i=0; i<size; i++){
        if( arr[i]>a){
            a = arr[i];
        }
    }

    int e = a;
    int mid , ans=-1;
    while(s<=e){
        mid = s+(e-s)/2;   
        if(ispossible(arr ,size, k, mid)){
            ans = mid;
         
            s = mid +1;
        }else{
            e = mid -1;
        }
        
    }
    return ans;
} 
int main(){
    int arr[5]={1,2,3,5,6}; 
    cout<<aggresiveCow(arr , 5 , 3);

}