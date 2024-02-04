#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &nums, int key ,int s=0, int n =0 ,int c =0) {
    
    if(c ==0){
        c++;
     n=nums.size();
    }
    cout<<"s "<<s<<" n "<<n<<" c "<<c<< endl;
    if(n<s){
        return 0;
    }
    int m = s+(n-s)/2;
     if(nums[m]==key){
        return 1;
    }else if( nums[m]<key){
         return search(nums, key,m+1 ,n,c);
    }else{
        return search(nums, key,s,m-1,c);
    }
}
int main(){
    vector<int> arr={1,3,4,5,6,7,8,20,30,50,200};
cout<<search(arr,6);
}