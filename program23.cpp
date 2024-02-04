#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int count =1 ;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            char ch = 'A'+i+j -2;
          cout<<ch<<"  ";
          count = count +1;
            }
        cout<<endl;
    }
}