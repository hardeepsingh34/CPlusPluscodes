#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix,int target){
int a, e=matrix[0].size();
int b, e1=matrix.size();
int end = e*e1-1;
int start =0,mid;
while(start<=end){
    mid= start+(end - start)/2;
    a= mid/e;
    b=mid%e;
    int element= matrix[a][b];
    if(element == target){
        return true;
    }else if(element < target){
        start=mid+1;
    }else{
        end = mid-1;
    }
}
return false;
}
int main(){
vector<vector<int>> v;
v={{1,3,4,5},{10,11,16,17},{23,30,34,60}};
cout<<searchMatrix(v,11);
}