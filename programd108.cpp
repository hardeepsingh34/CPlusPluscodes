#include<iostream>
using namespace std;
class hero{
    public:
     int health;
     char level;
     void print(){
        cout<<"health is "<<health<<endl;
        cout<<"level is "<<level<<endl;
     }
     
hero(int health , char level){
    this->level =level ;
    this->health =health;
   }
     hero(hero &temp){
       cout<<"copy constructor called "<<endl;
       this->health =temp.health;
       this->level = temp.level;
     }
};
int main(){
    hero s(70 ,'c');
    s.print();
    hero r(s);
    r.print();

}