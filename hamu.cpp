
#include<iostream>
using namespace std;
class car{
public:
car(){
    cout<<"constructor is called"<<endl;
    
}
car(string n){
    cout <<"car name is "<<n<<endl;
}
car(int a){
    cout<<"car no is "<<a<<endl;

}
~car(){
    cout<<"all is delete"<<endl;

}

};
int main(){
car a;
car n("audi");
car d(23);



}