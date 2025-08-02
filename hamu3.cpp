#include<iostream>
using namespace std;
// oops
class dj{
    private:
    //encupsulation
    int a=7;
    public:
    int get(){
        return a; 
    }
    void put(int j){
        a=j;
    }
};
int main(){
    // declaration of object
    dj manu;
    cout<<manu.get()<<endl;
    manu.put(5);
    cout<<manu.get()<<endl;
}
