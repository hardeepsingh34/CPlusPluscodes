#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K){
deque<long long int> dq;
vector<long long >ans;
//process first window of k size 
for(int i=0; i<K; i++){
    if(A[i]<0){
        dq.push_back(i);
    }
}
// store answer of first K sized window
<<<<<<< HEAD
// this is 
=======
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
if(dq.size() > 0){
    ans.push_back(A[dq.front()]);
}else{
    ans.push_back(0);
}
// process for remianing windows
for(int i=K; i<N; i++){
    //removal
    if(!dq.empty() && i-dq.front()>=K){
        dq.pop_front();
    }
    // addition
<<<<<<< HEAD
    // 
=======
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
    if(A[i]<0){
        dq.push_back(i);
    }
    //ans store
<<<<<<< HEAD

=======
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }else{
        ans.push_back(0);
    } 
} return ans;
}
void printv(vector<long long>v ){
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
long long int A[] ={-8,2,3,-6,10};
vector<long long > ans;
ans = printFirstNegativeInteger(A, 5, 2);
printv(ans);
}