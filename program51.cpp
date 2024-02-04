#include<iostream>
using namespace std;
int min(int arr[],int size){
    int min= 2147483647;
    for(int i=0; i<=size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[],int size){
    int max= -2147483647;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    return max;
}
int main(){
    int arr[10]={3,5,23,58,2,188,3,38,3,127};
    cout<<"maximum value in given set is :"<<max(arr,10)<<endl;;
    cout<<"minimum value in given set is :"<<min(arr,10)<<endl;
}