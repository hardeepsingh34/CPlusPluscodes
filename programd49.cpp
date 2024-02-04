#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool checkEqual(int a[26],int b[26]){
    for(int i=0; i <26; i++){
        if(a[i]!=b[i])
        return 0;
    }
    return 1;
}
bool checkInclusion( string s1, string s2){
    int count1[26]={0};
for(int i=0; i<s1.length(); i++){
int index = s1[i]-'a';
count1[index]++;
printArr(count1,26);
cout<<"hello";
}
int i=0;
int windowSize= s1.length();
int count2[26]={0};
while(i<windowSize && i<s2.length()){
    int index = s2[i]-'a';
    count2[index]++;
    i++;
    printArr(count2,26);

}
if(checkEqual(count1,count2)){
    return 1;}
while(i<s2.length()){
    char newchar =  s2[i];
    int index = newchar -'a';
    count2[index]++;
    char oldchar = s2[i-windowSize];
    index = oldchar-'a';
    count2[index]--;
    i++;
    if(checkEqual(count1, count2))
        return 1;
    }return 0;
    }

int main(){
    string a;
    string b;
    cout<<"enter string s1 "<<endl;
    cin>>a;
    cout<<"enter string s2 "<<endl;
    cin>>b;
    cout<<checkInclusion(a,b)<<endl;
}