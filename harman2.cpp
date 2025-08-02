#include<iostream>
using namespace std;
class dog{
public:
int x=4;
void name(){
    cout<<"pitbull"<<endl;
}

};
int main(){
    //object1
  dog german;
  german.name();
  cout<<german.x<<endl;


}