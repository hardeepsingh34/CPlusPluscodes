// program to demonstrate the use of static data member
#include<iostream>
using namespace std;
class test {
    private:
    //static data member:
    static int count;
    int x; //non-static member
    int y; 
    public:
    // member fuction  or fuction member
    test(){
     count++;
    }
    int getcount(){
        return count;
    }
    // static member function
    static void showcount(){
        cout<<"\n value of count : "<<count<<endl;
    }
};
//intialize static data member
int test:: count = 0;
int main(){
    test obj1;
    cout<<"\n current count is "<<obj1.getcount();
    test obj2;
    cout<<"\n current count is "<<obj2.getcount();
    test obj3;
    cout<<"\n current count is "<<obj3.getcount();
    test obj4;
    obj4.showcount();
    cout<<"\n current count is "<<obj4.getcount();
}