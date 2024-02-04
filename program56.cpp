#include<iostream>
using namespace std;
int twiceprob(int arr[],int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans  = ans^arr[i];
    }
    return ans;
}
int main(){
   int arr[11]={4,3,4,3,2,5,5,6,67,67,6};
   twiceprob(arr,11);
}