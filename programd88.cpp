#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
if(size==0||size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}else{
    bool a =isSorted( arr+1, size-1);
    return  a;
}
}
int main(){
int arr[8]={2,3,4,5,6,7,12,15};
cout<<isSorted(arr,8);
}