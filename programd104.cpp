#include<iostream>
#include<vector>
using namespace std;
/*
Rat maze problem
*/
bool isSafe(int x ,int y , int n, vector<vector<int>>visited, vector<vector<int>>m){
    if(x>=0 && x<n &&y>=0&& y<n && visited[y][x]==0 && m[y][x]==1){ 
        return true;
    }else{
        return false;
    }
}
void solve(vector<vector<int>> &m , vector<vector<int>>visited, vector<string> &ans1 , int n, vector<string> &ans,string &path, int x=0,int y=0  ){
if(m[y][x]==0){
    cout<<1;
return;
}

if(x==n-1 && y== n-1 && m[y][x]==1){
 ans.push_back(path);
  ans1.push_back(path);
 cout<<path<<endl;
 cout<<0<<endl;
 return;
}

visited[y][x]=1;
int newx , newy;
//down
newx=x;
newy=y+1;
if(isSafe(newx , newy  ,n, visited ,m)){
    path.push_back('D');
    solve(m,visited ,ans1, n , ans ,path ,newx , newy );
    path.pop_back();
}
//right
newx = x+1;
newy=y;
if(isSafe(newx , newy ,n, visited ,m)){
    path.push_back('R');
    solve(m,visited ,ans1, n , ans ,path ,newx , newy );
    path.pop_back(); 
}
//left
newx = x-1;
newy=y;
if(isSafe(newx , newy  ,n, visited ,m)){
    path.push_back('L');
    solve(m,visited ,ans1, n , ans ,path ,newx , newy );
    path.pop_back();
}
//up
newx = x;
newy=y-1;
if(isSafe(newx , newy  ,n, visited ,m)){
    path.push_back('U');
    solve(m,visited ,ans1, n , ans ,path ,newx , newy );
    path.pop_back();
}
visited[newy][newx]=0;
return;
}
int main(){
vector<vector<int>> arr ={{1,1,1,1},{1,0,0,1},{1,0,0,1},{1,1,1,1}};
vector<vector<int>>visited = arr;
int n = arr.size();
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        visited[i][j]=0;
    }
}
vector<string>ans;
vector<string>ans1;
string path;
solve(arr ,visited ,ans1, n , ans ,path);
int m = ans.size();
cout<<ans1.size();
cout<<m<<endl;
for(int i =0; i<m; i++){
    cout<<ans[i]<<endl;
}
}