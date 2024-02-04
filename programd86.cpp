#include<iostream>
using namespace std;
int countdistinctiWayToClimbStair(long long nstairs){
    if (nstairs <0){
        return 0;
    }
    if(nstairs ==0){
        return 1;
    }
    int ans = countdistinctiWayToClimbStair(nstairs-1)+
    countdistinctiWayToClimbStair(nstairs-2);
    return ans;
}
int main(){
int n;
cout<<"enter a number "<<endl;
cin>>n;
cout<<countdistinctiWayToClimbStair(n);
}