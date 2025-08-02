#include<iostream>
using namespace std;
// polymorphism
// runtime polymorphism
class animal{
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class dog : public animal{
    public:
    // if their is no speak function in dog class then output will be 'speaking' 
    //as speak function is inside the dog class therefore it overload the animal function
    // to print 'barking';
    void speak(){
        cout<<"barking "<<endl;
    }
};
int main(){
animal a1;
dog a2;
a1.speak();
a2.speak();
cout<<"hello world "<<endl;
}