#include<iostream>
#include<vector>
using namespace std;
int countprime(int n){
    int count =0;
    vector<bool> prime(n+1, true);
    prime[0]=prime[1]=false;
    for(int i=2; i<n; i++){
        
        if(prime[i]){
            count++;cout<<i<<" ";
            for(int j=0; j<n; j=j+i){
                prime[j]=false;
            }
        }
    }
    return count;
}
int main(){
 int n;
 cout<<"enter a number "<<endl;
 cin>>n;
 cout<<endl<<countprime(n);
}