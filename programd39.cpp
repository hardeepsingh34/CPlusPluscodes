#include<iostream>
#include<vector>
#include<algorithm>
/*
find sum of two array 
*/
using namespace std;
vector<int> reverse(vector<int>a){
 int s=0;
 int e= a.size()-1;
 while(s<e){
swap(a[s++],a[e--]);
 }
 return a;
}
vector<int> findArraySum(vector<int>&a , vector<int>&b ){
    int i=a.size()-1, j=b.size()-1 ,carry=0;
    vector<int>ans;
    while(i>=0 && j>=0){
    int val1=a[i];
    int val2= b[j];
    int sum = val1 + val2 + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    i--;
    j--;
    }
    while(i>=0){
        int val1 =a[i];
        int sum = val1 +carry;
        carry=sum/10;
        sum = sum %10;
        ans.push_back(sum);
        i--;
    }
     while(j>=0){
        int val1 =b[j];
        int sum = val1 +carry;
        carry=sum/10;
        sum = sum %10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry =sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    return reverse(ans);
}
int main(){
   vector<int> a ;
   vector<int> b;
   a= {1,3,4,5,6,7,8};
   b= {9,9,5,5,9,1,4,2};
   vector<int>c= findArraySum(a,b);
   for(int i:c){
    cout<<i<<"  ";
   }
} 