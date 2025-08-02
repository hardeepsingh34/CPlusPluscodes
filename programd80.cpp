#include<iostream>
using namespace std;
void print(int arr[], int n , int s=0){
    for(int i =s ;i< n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    print(arr,10);
    // constant variable declaration 
    const int i =4;
   
  
}