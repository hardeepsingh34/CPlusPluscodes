#include<iostream>
#include<set>
using namespace std;
/*
set is a container that stores unique elements in a specific order. It's part
of the C++ Standard Template Library (STL) and is defined in the <set> header
file. The elements in a std::set are sorted according to a comparison function
and can be of any data type that can be compared, such as int, char, or float.
*/
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