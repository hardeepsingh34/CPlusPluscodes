#include<iostream>
<<<<<<< HEAD
using namespace std;
int main(){
class solution{

};
=======
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class solution{
private:
vector<int> nextSmallestElement(vector<int>arr, int n){
stack<int>s;
s.push(-1);
vector<int>ans(n);
for(int i=n-1; i>=0; i--){
  int curr = arr[i];
  while(s.top() != -1 && arr[s.top()]>=curr){
    s.pop();
  }
  ans[i]=s.top();
  s.push(i);
}
return ans;
}
vector<int> prevSmallestElement(vector<int>arr, int n){
stack<int>s;
s.push(-1);
vector<int>ans(n);
for(int i = 0; i<n; i++){
  int curr = arr[i];
  while(s.top() != -1 && arr[s.top()]>=curr){
    s.pop();
  }
  ans[i]=s.top();
  s.push(i); 
}
return ans;
}
void print(vector<int>arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<"  ";
  }
}
public:
int largestRectangleArea(vector<int>&height){
 int n = height.size();
 vector<int>next(n);
 next = nextSmallestElement(height, n);

 vector<int>prev(n);
 prev= prevSmallestElement(height,n);
 print(prev);
 int area = -1;
 for(int i=0; i<n; i++){
  int l = height[i];
  if(next[i] == -1){
    next[i]=n;
  }
  int b = next[i]-prev[i]-1;
  int newarea = l*b;
  if(area<newarea){
    area= newarea;
  }
 }
 return area;
}
};
int main(){

solution s;

vector<int>arr;
arr ={2,1,6,6,5,3};

cout<<"this in largest area "<<s.largestRectangleArea(arr);
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
}