#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){
 for(int i=0; i<size ; i++){
    if (arr[i]==key){
        return i;
    }
 }
 return -1;
}
int main(){
     int arr[10]={1,4,5,390, 7823,3,5,6,1,7};
    cout<< linearSearch(arr, 10,5);
}