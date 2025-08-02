#include<iostream>
using namespace std;
//book allocation problem 
bool ispossible(int arr[], int n , int m, int mid){
    int studentCount=1;
    int pagesum =0;
    for(int i=0; i<n; i++){
       
       if(pagesum + arr[i]<=mid){
        pagesum += arr[i];
       }else {
        studentCount++;
        if(studentCount>m ||arr[i]>mid){
            return false;
        }
        pagesum=arr[i];
       }
    }
    return true;
}
int allocatebook(int arr[], int size, int n){
int s=0;
int sum =0;
for(int i=0; i<size; i++){
sum += arr[i];
}
int e =sum;
int ans = -1;
int mid;
while(s<e){
    
       mid = s+(e-s)/2;
    if(ispossible(arr,size, n ,mid)){
       ans = mid;
       e =mid -1;
      }else{
        s= s+1;
      }

}
return ans;
}
int main(){
   int arr[5]={10,20,30,40,50};
   cout<<allocatebook(arr ,5 ,3);
}