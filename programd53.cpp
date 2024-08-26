#include<iostream>
#include<conio.h>
using namespace std;
/*
Checking weather the input key is available or not in given 2-D array:-
*/
bool ispresent(int arr[][4], int n, int key){
for(int i=0; i<n; i++){
    for(int j=0; j<4; j++){
       if(arr[i][j]==key){
        return 1;
       }
    }
}
return 0;
}
int main(){
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
cout<<ispresent(arr,3,12);

}