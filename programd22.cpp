#include<iostream>
#include<algorithm>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void intsertionSort( int arr[], int n){
    for(int i =1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--){ 
           
            if(arr[j]>temp){
                arr[j+1]=arr[j];
             
            }else{
                break;
            }
            

        }
        cout<<" temp "<<temp<<endl;
        
        arr[j+1]=temp;
         printArr(arr , 10);
    }
    int a =1 , b=2;
    swap( a , b);
    cout<<b<<endl;

}
int main(){
    int arr[10]={10,3,2,1,4,5,8,9,6,0};
    intsertionSort(arr, 10);
    printArr(arr , 10);
    
}
