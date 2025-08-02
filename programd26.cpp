#include<iostream>
#include<list>
//list is sequence container that allows for efficient 
//insertion and deletion of elements from anywhere in the container
// It is typically implemented as a doubly-linked list,
// offering constant time insertions and deletions, and bidirectional iteration
using namespace std;
int main(){
list<int> a;
list<int> n(5 ,100);
cout<<"printing n "<<endl;
for(int i:n){
    cout<<i<<"  ";
}cout<<endl;
n.push_back(1);
n.push_front(2);
for(int i:n){
    cout<<i<<"  ";
}cout<<endl;
cout<<"size "<<n.size()<<endl;
n.erase(n.begin());
cout<<" after erase "<<endl;
for(int i:n){
    cout<<i<<"  ";
}cout<<endl;


}