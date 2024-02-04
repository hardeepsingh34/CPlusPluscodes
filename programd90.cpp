#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n, int key){
    if(n==0){
        return false ;
    }
    if(arr[0]==key){
        return true;
    }else{
    bool remainingpart =linearSearch(arr+1, n-1 ,key);
    return remainingpart;
    } 
}
int main(){
int arr[10]={1,3,4,5,6,7,8,5,6,14};
cout<<linearSearch(arr,10, 15);
}