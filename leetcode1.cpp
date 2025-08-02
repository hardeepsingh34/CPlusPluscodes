#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j= 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
         
            if(nums[i] == val){
            
                for(int k =i; k<(n-i-j); k++){
                    nums[k]= nums[k+1];
                }
                j++;
            }
        }
        return nums.size()-j;
    }
};
int main(){
   vector<int>nums = {3,2,2,3};
   int val = 3;
   Solution s;
   int n =s.removeElement(nums, val);
   for(int i = 0; i<n; i++){
    cout<<nums[i]<<" ";
   }
}