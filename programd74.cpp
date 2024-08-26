#include<iostream>
using namespace std;
/*
Function to get sum of array :-
*/
int getsum(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
     ans = ans + arr[i];
    }
    return ans;
}
int main(){
    int n ;
    cout<<"enter a number size of array"<<endl;
    cin >>n;
    int * arr = new int(n);
    cout<<"enter elements of array , number of elements are "<<n<<endl;
    for (int i =0; i<n; i++){
        cin>> arr[i];
    }
    int ans = getsum(arr, n);
    cout<<"answer is "<<ans<<endl;
    }