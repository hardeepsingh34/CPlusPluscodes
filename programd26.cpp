#include<iostream>
#include<list>
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