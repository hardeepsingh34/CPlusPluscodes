#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4>a={1,2,3,4};
    int size = a.size();
    cout<<size<<endl;
   for(int i=0; i<size; i++ ){
    cout<<a[i]<<" ";
   }
   cout<<endl<<"element at 2nd index "<< a.at(2)<<endl;
   cout<<"empty or not "<<a.empty()<<endl;
    cout<<"hardeep singh bhatti"<<endl;
    cout<<"first element "<< a.front()<<endl;
    cout<<"last element "<< a.back()<<endl;
}