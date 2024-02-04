#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<vector<int>> v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}
void rotate(vector<vector<int>>& v) {
        int count=0;int j=v.size()-1,c;
        while(count<v.size()){
        for(int i=0; i<v.size(); i++){
            v[i].push_back(v[j][i]);
        }j--;
    
        count++;
        } 
        for(int i=0; i<v.size(); i++){
             for(int i=v.size()-1; i>=0; i--){
        vector<vector<int>>::iterator it;
        vector<int>::iterator it2;
        it2= v[i].begin();
        v[i].erase(it2);
      }
        }
    }
int main(){
    vector<vector<int>> v;
v={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
rotate(v);
vector<vector<int>>::iterator it;
//  v.push_back({15,13,2,5});
printvector(v);

}