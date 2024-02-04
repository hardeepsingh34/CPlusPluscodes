#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
    public:
    void print(){
        cout<<"health "<<health<<endl;
        cout<<"level "<<level<<endl;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
};
int main(){
    // static allocation 
hero a; 
a.sethealth(80);
a.setlevel('a');
cout<<a.gethealth()<<endl;
cout<<a.getlevel()<<endl;
cout<<a.health<<endl;
// dynamic allocation 
hero *b = new hero;
b->setlevel('A');
b->sethealth(70);
cout<<"level is "<<(*b).level<<endl;
cout<<"health is "<<(*b).health<<endl;
cout<<"level is "<<b->level<<endl;
cout<<"health is "<<b->health<<endl;
}