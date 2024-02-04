#include<iostream>
using namespace std;
//moutain array question.
int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int m;
    while(s<e){
        cout<<"0";
        m=s+(e-s)/2;
        
         if(arr[m]>=arr[0]){
            s=m+1;
        }else {
            e=m;
        }
    }
    return s;
}
int main(){
    int arr[5]={8,9,10,11,3};
    cout<<pivot(arr,5);
}