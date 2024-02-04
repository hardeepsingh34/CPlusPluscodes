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
class male:public human{
    public:
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
}