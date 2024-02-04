#include<iostream>
using namespace std;
#define Date followers
#define followers 31
#define ELE 1,\
2,\
3
#define min(a,b) (((a)<(b))?(a):(b))
int main(){
cout<<Date<<endl;
int arr[]={ELE};
for(int i=0; i<3; i++){
    cout<<arr[i];
}
cout<<endl;
int a=88;
int b = 76;
cout<<min(a,b)<<endl;
}