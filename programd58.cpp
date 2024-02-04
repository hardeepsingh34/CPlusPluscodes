#include<iostream>
#include<vector>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int s1=0, e1= matrix[0].size()-1;
      int s=0, e= matrix.size()-1;
      int m=0;

        while(s<=e){
             m= s+(e-s)/2;
             
            if(matrix[m][0]==target){
                return true;
            }else if(matrix[m][0]<target){
                s=m+1;
            }else{
                e=m;
            }
        }
        
      
        cout<<m;cout<<"m is "<<m<<endl;
        int m1;
        while(s1<=e1){
            m1=s1+(e1-s1)/2;
            cout<<m1;
             if(matrix[m][m1]==target){
                return true;
            }else if(matrix[m][m1]<target){
                s1=m1+1;
            }else{
                e1=m1;
            }
        }
        return false;
    }
int main(){
vector<vector<int>>v;
v= {{1}};
cout<<searchMatrix(v,1);
}