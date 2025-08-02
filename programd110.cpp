#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    char level;
    public:
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
    void setname(string m){
        name = m;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
  
};
int main(){
hero hero1;
hero1.sethealth(10);
hero1.setlevel('a');
hero1.setname("babbar");
hero1.print();
hero hero2(hero1);
hero2.print();
hero1.name[0] ='g';
cout<<endl<<"hero1 "<<endl<<endl;
hero1.print();
cout<<endl<<"hero2 "<<endl<<endl;
hero2.print();
}