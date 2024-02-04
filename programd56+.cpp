#include<iostream>
#include<vector>
using namespace std;
void spiralprint(vector<vector<int>> &v){
   vector<int> ans;
   int s1=0, e1=v[0].size()-1;
   int s=0, e=v.size()-1;
   cout<<e1<<endl<<e<<endl;
   int n= (e+1)*(e1+1) , count =0;
   while(count<n){
    for(int i=s1; i<=e1 && count<n; i++){
        cout<<v[s][i]<<" ";
        count++;
    }s++;
    
    for(int j=s; j<=e && count<n; j++){
        cout<<v[j][e1]<<" ";
        count++;
    }e1--;
    for(int i=e1; i>=s1 && count<n ; i--){
        cout<<v[e][i]<<" ";
         count++;
    }e--;
    for(int i=e; i>=s && count<n; i--){
        cout<<v[i][s1]<<" ";
         count++;
    }s1++;
   }
   
}

int main(){
vector<vector<int>> v;
v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
spiralprint(v);
}