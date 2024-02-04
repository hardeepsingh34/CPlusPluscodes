#include<iostream>
using namespace std;
int largestsum(int arr[][4], int n){
    int ans =-1,a;
    for(int i=0; i<n; i++){ 
        int sum =0;
      for(int j=0; j<4; j++){
        sum =sum+arr[i][j];
      }
      if(sum>ans){
        cout<<sum<<endl;
        ans =sum;
        a=i;
      }
    }
    return a;
}
int main(){
    int arr[3][4]={1,3,31,4,5,6,7,8,9,10,11,12};
    cout<<largestsum(arr,3);

}