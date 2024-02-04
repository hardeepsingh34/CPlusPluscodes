//program to illustrate the allocation of memory for
// one dimensional arry at execution time
#include<iostream>
using namespace std;
int main(){
int *a , n, i ,big;
cout<<"\nEnter size of one dimensional array"<<endl;
cin>>n;
a = new int[n];    // allocate memory for array

cout<<"Enter "<<n<<" elements of array"<<endl;
for(i=0;i<n; i++){
    cin>>a[i];
}
if(n==0){
    cout<<"\n Unable to allocate memory"<<endl;
    exit(1);
}
for(big =*a,i=1; i<n; i++){
if(*(a+i)>big){
    big= *(a+i);
}
}
cout<<"\nlargest element of the array =  "<<big<<endl;
delete a;   // release memory held by array
}
