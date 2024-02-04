#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printvector(vector<vector<int>> v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}
void rotate90(vector<vector<int>> &v){
    int n,a;
    if(v.size()%2 ==0){
         n = v.size()/2;
        a=n;
    }else{
       
         n= (v.size()/2)+1;
         a= n-1;
    } 
    int s=0, e=v.size();
    int s1=0, e1=v.size();
    int count =0,k=a;
    while(count<a){
        int j=e1-1;
    for(int i=s; i<j; i++){
         swap(v[s][i],v[s][j]);
         j--;
    }
    j=e-1;
    for(int i=s1; i<j; i++){
        swap(v[i][s1],v[j][s1]);
        j--;
    }
    j=e1-1;
    for(int i=s; i<j; i++){
        swap(v[e-1][i],v[e-1][j]);
          j--;
    }
    for(int i=s1; i<k; i++){
        swap(v[s][a-i],v[i+1][e1-1]);
    }
    for(int i=s; i<k; i++){
        swap(v[s][i+1],v[i+1][s1]);
    }
    for(int i=e; i>k; i--){
       swap(v[e-1][n-i+1],v[i-1][s1]);
    }
    e--; s++;s1++;
    count++;k--;
    } 
}
int main(){
vector<vector<int>> v;
v={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
rotate90(v);
printvector(v);
}