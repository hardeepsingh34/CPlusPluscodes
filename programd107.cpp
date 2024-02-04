#include<iostream>
using namespace std;
class hardeep{
    public:
    int health =5;
    char level;
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
    hardeep(int health){
        cout<<"this ->"<<this<<endl;
        this->health = health;
        cout<<"constructor is called "<<endl;
    }
   hardeep(int health , char level){
    this->level =level ;
    this->health =health;
   }
};
int main(){
hardeep a(10);
hardeep b(1,'B');
hardeep c(3);
a.print();
b.print();
}