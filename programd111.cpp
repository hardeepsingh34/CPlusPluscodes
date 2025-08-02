#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    string name ;
    void print(){
        cout<<"name is "<<name<<endl;
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
    ~hero(){
        cout<<"destructor is called "<<endl;
    }
};
int main(){
    hero h1;
    h1.sethealth(10);
    h1.level = 'a';
    h1.name = "hardeep";

    h1.print();
    hero h2(h1);
    h2.print();
    h1.name[0]='p';
    h1.print();
    h2.print();

}