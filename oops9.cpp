#include<iostream>
using namespace std;
class two;
class one{
  private:
  int a;
  public:
  void setone(int x){
    a= x;
  }  
  void show1(two);
  void show2(two);
};
class two{
    private:
    int c;
    int b;
    public:
    void setdata(int x, int y){
        b= x ;
        c = y;
    }
    void showTwo(){
        cout<<" Two b " <<b <<endl;
    }
    friend one;
};
void one:: show1(two r){
    cout<<" one data "<<a<<endl;
    cout<<" two data b = "<<r.b<<endl;
}
void one:: show2 (two r){
  cout<<" one data "<<a<<endl;
   cout<<" two data c = "<<r.c<<endl;
}
int main(){
one aa;
two bb;
aa.setone(34);
bb.setdata(4,6);
aa.show1(bb);
aa.show2(bb);
}