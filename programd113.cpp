#include<iostream>
using namespace std;
//Encapsulation:
class student{
    private:
    string name ;
    int age=10 ;
    int height;
    public:
    int getage(){
        return age;
    }
};
int main(){
student first;
cout<<first.getage()<<endl;
cout<<"sab sahi hai "<<endl;
}