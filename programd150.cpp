#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class solution{
    private:
    bool knows(vector<vector<int>>&m, int a, int b , int n){
        if(m[a][b] ==1){
            return true;
        }else
        return false;
    }
    public:
    int celebrity(vector<vector<int>>&M, int n){
        stack<int>s;
        for(int i =0; i<n; i++){
            s.push(i);
        }
        while(s.size()>1){
            int a =s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(knows(M,a,b,n)){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        int ans = s.top();
        int zerocount =0;
        for(int i=0; i<n; i++){
            if(M[ans][i]==0)
            zerocount++;
        }

        if(zerocount!=n){
            return -1;
            
        }
        int onecount = 0;
        for(int i=0; i<n; i++){
            if(M[i][ans]==1)
            onecount++;
        }
        if(onecount != n-1)
        return -1;

        return ans;
    }
};
int main(){
vector<vector<int>>arr={
    {1,1,1,1,0,1},
    {1,0,1,0,1,0},
    {0,0,0,0,0,0},
    {1,0,1,0,1,1},
    {0,0,1,0,0,1},
    {1,1,1,1,1,0}
};
solution s;
int c = s.celebrity(arr, 6);
cout<<c;
}   
