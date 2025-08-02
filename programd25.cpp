#include<iostream>
#include<deque>
/*
Deque is a sequence container that allows for fast insertion and deletion at both
the beginning and the end. Unlike vectors, deques are not guaranteed to store
all elements in contiguous storage locations, which means accessing elements
by offsetting a pointer to another element is undefined behavior.
 */
using namespace std;
int main(){
deque<int> a;
a.push_back(1);
a.push_front(2);
a.push_back(3);
cout<<"element at 0 index "<<a.at(0)<<endl;
cout<<"front "<<a.front()<<endl;
cout<<" back "<<a.back()<<endl;
cout<<" empty or not "<< a.empty()<<endl;
cout<<" before erase "<<a.size()<<endl;
a.erase(a.begin(),a.begin()+1);
cout<<"after erase "<<a.size()<<endl;
for(int i:a){
    cout<<i<<"  ";
}cout<<endl;
}