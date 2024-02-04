#include<iostream>
using namespace std;
int getsum(int arr[], int n, int sum= 0){
if(n==0){
    return sum;
}
sum = sum + arr[0];
getsum(arr+1, n-1, sum);

}
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout<<getsum(arr, 10);
}