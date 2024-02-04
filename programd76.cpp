#include<iostream>
using namespace std;
int main(){
     int n, n2;
     cout<<"enter the number of rows and columns you want "<<endl;
     cin>>n;
     cin>>n2;
     int a= n2;
     int **arr= new int *[n]; 
     for(int i =0; i<n; i++){
       arr[i]= new int[n2]; 
           n2--;
       cout<<n2<<" ";
     }
     n2 =a;
     cout<<n2<<endl;
     //taking input
     cout<<"enter the array "<<endl;
     for(int i = 0; i<n ; i++){
   
        for(int j =0; j<n2; j++){
            cin>>arr[i][j];
                
        }      n2--;
     }
     cout<<endl;
     n2 =a;
     //flashing output 
     for(int i= 0; i<n; i++){
      
        for(int j =0; j<n2; j++){
            cout<<arr[i][j]<<" ";
             
        }cout<<endl; n2--;
     }
}