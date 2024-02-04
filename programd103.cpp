#include<iostream>
#include<vector>
using namespace std;
void solve(string digit , string output , int index , vector<string> &ans , vector<string> mapping){
if(index >= digit.length()){
     ans.push_back(output);
     return;
}
//typecast
int number = digit[index]-'0';
string value = mapping[number];
for(int i=0; i<value.length(); i++){
    //include
    output.push_back(value[i]);
    solve(digit, output , index+1 , ans , mapping);
    output.pop_back();
}
}
int main(){
vector<string>ans;
vector<string>mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string digit;
string output;
cout<<"enter the numbers "<<endl;
cin>>digit;
solve(digit , output ,0 ,ans , mapping);
for(int i =0 ; i<ans.size(); i++){
    cout<<" { ";
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    }cout<<"} ";
}
}