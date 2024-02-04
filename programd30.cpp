#include<iostream>
#include<set>
using namespace std;
int main(){
set<int>s;
s.insert(3);
s.insert(4);
s.insert(1);
s.insert(6);
s.insert(6);
s.insert(0);
for(auto i:s){
    cout<<i<<"  ";
}cout<<endl;
set<int>::iterator it = s.begin(); 
s.erase(it);
for(auto i:s){
    cout<<i<<"  ";
}cout<<endl;
}