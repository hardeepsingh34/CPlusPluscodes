#include<iostream>
using namespace std;
int main(){
int arr[10] = {2,24, 5,3 ,5, 3,4 ,34, 34, 34};
int i=0;
//program to demonstrate passing of an entire array using pointer notation
int *intptr = arr;
cout<<endl<<endl;
cout<<"printing element of 1D array using pointer"<<endl;
for( i; i<10; i++){
    cout<<(*(intptr + i))<<" ";
}
cout<<endl;
cout<<endl;
//program to print the elements of the 2D array as array of 1D array
int a[3][2] ={{1,2},{2,4},{6,3}};
cout<<"printing element of 2D array using 1D array"<<endl;
for( i=0; i<3; i++){
    cout<<*a[i]<<" ";
}
cout<<endl;
cout<<endl;
//program to print the elements of the 2D arry using pointer notation;
cout<<"printing element of 2D array using pointer notation"<<endl;
for(int j = 0; j<3; j++){
    for(int k= 0; k<2; k++){
        cout<<*((*(a+j)+k))<<" ";
    }
}
cout<<endl;
}