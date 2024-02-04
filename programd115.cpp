#include<iostream>
using namespace std;
//Inheritane
class human{
    public:
    int height;
    int weight;
    int age=10; 
    public:
    int getage(){
        return age;
    }
    void setweight(int w){
        this->weight =w;
    }
};
class animal{
    private:
    
    public:
    char name= 'T';
    char getname(){
        return name;
    }
    void walk(){
        cout<<"walk on four legs "<<endl;
    }
};
class male:public human,private animal{
    public:
    int age = 20;
    string color= "black";
    void sleep(){
        cout<<"man sleeping "<<endl;
    }
   
};
int main(){
male object1;
cout<<object1.age<<endl;
cout<<object1.color<<endl;
object1.sleep();
cout<<object1.getage()<<endl;
//object1.walk();
//cout<<object1.name;
}