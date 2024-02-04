// this code is not valid (failure) skip this
#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>arr, int n){
    for(int j=0; j<n; j++){
        cout<<arr[j]<<"  ";
    }cout<<endl;
}
vector<int> spiralprint(vector<vector<int>>v , int rows, int columns){
    cout<<v.size()<<endl;;
    cout<<v[0].size()<<endl;
vector<int>a;
int s=0, s1=0;
int e=columns, e1=rows;
int i=0,j=0,count=0;
int n= rows*columns;
while(count<n){  
        j=s;
        i=s1;
    while(j<e){
        cout<<v[i][j++]<<" ";
        count++;
    }  s++;
    j=0;
     j=e;
     i=s1;
    while(i<e){
        cout<<v[i++][j]<<" ";
        count++;
       
    }  
    e--;
    i=0;
    j=e1;
    i=e;
    while(j>=s){
        cout<<v[i][j--]<<" ";
        count++;
    } s1++;
    i=0; 
    j=e1;
     i=e;
    while(i>=s1){
       
        cout<<v[i--][j]<<" ";
        count++;
    }
   e1--;
   
    
   
}
}
int main(){
vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
vector<int>a = spiralprint(arr,3,4);

}