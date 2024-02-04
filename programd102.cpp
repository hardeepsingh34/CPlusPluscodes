#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(string str, string output, int index , vector<string>&ans){
if(index >= str.length()){
    if(output.length()>0)
    ans.push_back(output);
    return ;
}
//exclude
solve(str , output ,index+1 ,ans);
//inlclude
char element = str[index];
output.push_back( str[index]);
solve(str , output ,index+1 ,ans);
}
int main(){
string str = "abc";
string output;
vector<string> ans;
solve(str, output , 0 , ans);
 for(int i =0 ; i<ans.size(); i++){
        cout<<"{ ";
        cout<<ans[i]<<" ";
        cout<<"} , ";
     }
}