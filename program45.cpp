#include<iostream>
using namespace std;
void printcounting(int a){
    for(int i =1; i<=a; i++){
        cout<<i<<endl;
    }
  
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    printcounting(n);

}