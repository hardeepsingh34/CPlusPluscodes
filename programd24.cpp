#include<iostream>
#include<vector>
using namespace std;
/*
Vectors in C++ are dynamic arrays that can resize automatically when an element
is inserted or deleted. They are part of the C++ Standard Template Library (STL)
and provide a way to store elements of the same data type. Vectors are known for 
their ability to handle automatic storage management, which includes expanding and
contracting as needed.
*/
int main(){
    vector<int>v;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<"element at 1st index "<<v.at(1)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<"before pop "<<endl;
    for(int i :v){
        cout<<i<<"  ";
    }cout<<endl;
    v.pop_back();
    cout<<" after pop "<<endl;

    for( int i:v){
        cout<<i<<"  ";
    }cout<<endl;
    cout<<"before clear size "<< v.size()<<endl;
    v.clear();
    cout<<"after clear size "<< v.size()<<endl;
    vector<int> a(5,1);
    vector<int>last(a);
    for(int i:a){
        cout<<i<<"  ";
    }cout<<endl;
    for(int i:last ){
        cout<<i<<"  ";
    }cout<<endl;
    
}