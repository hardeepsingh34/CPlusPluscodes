#include<iostream>
using namespace std;
class car{
public:
// constructor
string name;
car(){
    cout<<"constructor is called"<<endl;
}

car(string n){
    name = n;
    cout<<"car name is "<<name<<endl;
}
car(int n){
    cout<<"car no. is "<<n<<endl;
}

~car(){
    cout<<"all items are deleted "<<endl;
}
};
int main(){
    cout<<1<<endl;
car a("audi");
car c;
car d(4342);
cout<<2<<endl;
car b("scarpio");
cout<<3<<endl;
cout<<6;
}