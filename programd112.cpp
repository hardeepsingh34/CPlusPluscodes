#include<iostream> 
using namespace std;
class hero{
    public:
    static int timeToComplete ;
    static int random(){
        cout<<timeToComplete<<endl;
    }
    ~hero(){
        cout<<"destructor is called "<<endl;
    }
};
int hero :: timeToComplete =5;
int main(){
    cout<<hero::timeToComplete<<endl;
    // another way but try to use upper 
    hero a ;
    a.random();
    cout<<a.timeToComplete<<endl;
    hero *h1 = new hero;
    cout<<(*h1).timeToComplete<<endl;
    delete h1;

}