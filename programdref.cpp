#include<iostream>
using namespace std;
void update(int& n){
    n++;
}
int main(){
    int i=5;
    int& j=i;
    update(i);
    cout<<i<<endl;

}