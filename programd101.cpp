#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int>nums , vector<int>output ,int index, vector<vector<int>> &ans , int cnt =0){
    if(index>= nums.size()){
        ans.push_back(output);
        return;
    }
    cout<<"index  "<<index<<"  "<<endl;
solve(nums, output , index+1, ans,cnt);
int element =nums[index];
    cout<<"nums[index] "<<element<<endl;
output.push_back(element);
    cout<<"output ";
    for(int i= 0 ; i<output.size(); i++){
      cout<<output[i]<<" ";
    }cout<<endl<<endl;;
solve(nums, output , index+1, ans,cnt);
}

int main(){
vector<int>nums= {1,2,3};
    vector<vector<int>>ans;
    vector<int>output;
    int index =0;
    solve(nums ,output ,index ,ans);
    cout<<"rows "<<ans.size()<<endl;
    cout<<"columns "<<ans[0].size()<<endl;
    for(int i =0 ; i<ans.size(); i++){
        cout<<"{ ";
     for(int j =0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
     }cout<<"} , ";
    }
}
