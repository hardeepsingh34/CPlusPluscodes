#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextsmallerelement(vector<int> &arr , int n){
    stack<int> s;
    s.push(-1);
    vector<int>ans(n);
    for(int i= n-1; i>=0; i--){
        int curr = arr[i];
         cout<<"curr = "<<curr<<"   top = "<<s.top()<<endl;
        while(s.top()>= curr){
            cout<<"poping "<<endl;
            cout<<"curr = "<<curr<<"   top = "<<s.top()<<endl;
            s.pop();
        }
        // ans is on top of stack
        ans[i] =s.top();
        s.push(curr);
    }
    return ans;
}
void printarr(vector<int> arr, int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;
}
int main(){
vector<int> a;
<<<<<<< HEAD
a={2,1,4,5,4,3,2};
printarr(a,7);
vector<int>b; 
b= nextsmallerelement(a,7);
printarr(b,7);
}
=======
a={2,1,4,5,4,3,2,0};
printarr(a,8);
vector<int>b; b= nextsmallerelement(a,8);
printarr(b,8);
}
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
