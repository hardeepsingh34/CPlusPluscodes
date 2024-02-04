#include<iostream>
using namespace std;
class hero{
    //properties
    public:
    int n=4;
    int m= 4;
    char level = 'A';
};
int main(){
  hero h1;
  cout<<"size "<<sizeof(h1)<<endl;
  cout<<h1.n;
  cout<<h1.level<<endl;
}