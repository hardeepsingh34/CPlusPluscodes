#include<iostream>
#include<map>
using namespace std;
/*
The std::map is a fundamental part of the C++ Standard Template Library (STL),
providing a sorted associative container that maintains key-value pairs with
unique keys. The keys in a map are sorted using a comparison function, which
allows efficient searching, insertion, and deletion operations—typically with
logarithmic complexity.
*/
int main(){
    map<int,string>m;
    m[1]= "babbar ";
    m[13]= "kumar ";
    m[2]= "love ";
    m.insert({5,"bheem "});
    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<"  "<<i.second<<endl;
    }
    cout<<"finding 13 "<<m.count(-13)<<endl;
    m.erase(1);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<"  "<< i.second<<endl;
    }
    auto it = m.find(5);
    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}