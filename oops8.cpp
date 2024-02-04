//program to demonstrate the use of member Function of a class as friend of another class 
#include<iostream>
using namespace std;
class two;
class one{
    private:
    int a;
    public:
    void setdata( int x){
        a =x;
    }
    void showdata(two);  // cannot provide definition here
};
class two{
    private:
    int b;
    public:
    void setdata( int x){
        b =x;
    }
    void showtwo(){
        cout<<" Two data "<<b<<endl;
    }
    friend void one:: showdata(two);
};
void one:: showdata(two r){
    cout<<" one data "<< a<<endl;
    cout<<" Two data "<<r.b<<endl;
}
int main(){
one aa;
two bb;
aa.setdata(4);
bb.setdata(56);
aa.showdata(bb);

}
