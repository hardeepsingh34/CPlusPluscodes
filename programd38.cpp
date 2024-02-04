#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>a){
    int count=0;
    for(int i=1; i<a.size(); i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[a.size()-1]>a[0])
    count++;
    return count <=1;
}
int main(){
vector<int>a;
a={4,5,6,8,9,1,2,3,4};
cout<<check(a)<<endl;
}