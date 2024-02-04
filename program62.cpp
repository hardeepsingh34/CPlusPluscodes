#include<iostream>
using namespace std;
int main(){
   int arr1[10]={3,3,6,4,5,8,9,2,3,2};
   int arr2[10]={2,3,4,2,1,-1,2,2,4,5};
   int arr3[10]={2,4,5,6,23,43,5,3,1,2};
   int sum = 25;
   for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        for(int k=0; k<10; k++){

        if(arr1[i]+arr2[j]+arr3[k]==sum){
         cout<<"( "<<arr1[i]<<" , "<<arr2[j]<<" , "<<arr3[k]<<")"<<endl;
        }
        }
    }
   }
}