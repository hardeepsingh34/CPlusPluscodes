#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>arr, int n){
    for(int j=0; j<n; j++){
        cout<<arr[j]<<"  ";
    }cout<<endl;
}
vector<int> waveprint(vector<vector<int>>arr , int rows ,int columns){
vector<int>ans;
int k=0;
for(int i=0; i<columns; i++){

if(i%2==0){
    for(int j=0; j<rows; j++){
   ans.push_back( arr[j][i]);
    }
}else if(i%2==1){
    for(int j=rows-1; j>=0; j--){
        ans.push_back(arr[j][i]);
    }
}
}
return ans;
}

int main(){
vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
vector<int>a =waveprint(arr,3,4);
printArr(a,a.size());

}