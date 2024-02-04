// program to demostrate the use of global function as a 
// friend function of a class
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
    void showdata(){
        cout<<" One data : "<< a<<endl;
    }
friend int addboth( one, two);
};
class two{
    private:
    int b;
    public:
    void setdata( int x){
        b =x;
    }
    void showdata(){
        cout<<" Two data : "<< b<<endl;
    }
 friend int addboth( one, two);
};
int addboth(one r, two s){
    return r.a + s.b;
}
int main(){
one aa;
two bb;
int result;
aa.setdata(4);
aa.showdata();
bb.setdata(56);
bb.showdata();
result = addboth(aa, bb);
cout<<" result is "<<result<<endl;
}