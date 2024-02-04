#include<iostream>
using namespace std;
int getsum(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
     ans = ans + arr[i];
    }
    return ans;
}
int main(){
    int n ;
    cout<<"enter a number "<<endl;
    cin >>n;
    int * arr = new int(n);
    for (int i =0; i<n; i++){
        cin>> arr[i];
    }
    int ans = getsum(arr, n);
    cout<<"answer is "<<ans<<endl;
    }