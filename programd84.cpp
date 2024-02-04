#include<iostream>
using namespace std;
void reachHome(int scr, int dest){
    
    if(scr ==dest+1){
        cout <<"pahuch gya "<<endl;
        return ;
    }cout<<"location "<<scr<<" destination "<<dest<<endl;
scr++;
reachHome(scr, dest);
}
int main(){
int n;
cout<<"enter a number "<<endl;
cin>>n;
reachHome(0 ,n);
}