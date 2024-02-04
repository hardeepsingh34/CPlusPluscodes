#include<iostream>
using namespace std;
int main(){
   int  arr[10]={1,2,2,3,4,5,6,7,8,9};
int ans=0;
for(int i=0; i<10; i++){
ans = ans^i^arr[i];
}
cout<<ans<<endl;

}