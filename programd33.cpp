#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printvector(vector<int> a){
    for(int i:a){
        cout<<i<<"  ";
    }cout<<endl;
}
void reverseArr(vector<int> &a , int n){
    int s = n+1;
    int e= a.size()-1;
    while(s<e){
    swap(a[s],a[e]);
    s++;
    e--;
    }
}
int main(){
    vector<int> a;
    a ={2,6,8,3,9,7,7,9,0,7,2,3,6,4,7,5,6};
    a.push_back(1);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
     printvector(a);
    reverseArr(a, -1);
    printvector(a);

}