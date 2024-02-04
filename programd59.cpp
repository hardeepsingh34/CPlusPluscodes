#include<iostream>
#include<vector>
using namespace std;
int searchMatrix(vector<vector<int>> &matrix , int target){
    
    int s=0, e=matrix.size()-1;
    int s1=0, e1=matrix[0].size()-1;
    int a;
    if(e<e1){
      a=e;
    }else if(e1<e){
       a=e1;
    }
    int m,m1;
   
    while(s<=a){
        m=s+(a-s)/2;
        m1= s1+(a-s1)/2; 
        int element = matrix[m][m1];
        if(element ==target){
            return true;
        }if(element < target){
            s=m+1;
            s1=m1+1;
        }else{
            a=m-1;
            a=m1-1;
        }
    }
    int  start=0, start1= 0;
    int end=m, end1= m1;
    int mid , mid1;
    cout<<m<<" "<<m1<<endl;
    while(start<=end){
        mid=start+(end-start);
        int element= matrix[mid][m1];
         if(element ==target){
            return true;
        }if(element < target){
            start =mid+1;
        }else{
            end=mid-1;
        }
    }
     while(start1<=end1){
        mid1=start1+(end1-start1);
        int element= matrix[m][mid1];
         if(element ==target){
            return true;
        }if(element < target){
            start1 =mid1+1;
        }else{
              end1=mid1-1;
        }
    }
    return false;
}
int main(){
vector<vector<int>> v;
v= { {1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}};
cout<<searchMatrix(v,3);
}