#include<iostream>
using namespace std;
/*
Taking input in 2-D array and printing them :-
*/
void printArr(int arr[][4], int n){
for(int i=0; i<3; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<"   ";
        if(arr[i][j]/10 <=0){
            cout<<" ";
        }
    }cout<<endl<<endl;
}
}
void inputArr(int arr[][4],int n){
    for(int i=0; i<3; i++){
        cout<<"enter elements of "<<i<<" row"<<endl;
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
        }
    }cout<<endl<<endl;
}

int main(){
int arr[3][4];
cout<<"enter elements of 2-d array in row wise"<<endl;
inputArr(arr,4);
printArr(arr,4);
}