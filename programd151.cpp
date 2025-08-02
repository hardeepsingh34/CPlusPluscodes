#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class solution{
    private:
    void printarr(int arr[][4],int n, int x){
        for(int i = 0; i<n; i++){
            cout<<arr[x][i]<<" ";
        }
        cout<<endl;
    }
    void print(vector<int>arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<"  ";
  }
}
    
    vector<int>  nextSmallerElement(int *arr ,int n){
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);

        for(int i= n-1; i>=0; i--){
            int curr= arr[i];
            while(s.top()!=-1 && arr[s.top()]>=curr){
                s.pop();
            }
        ans[i] = s.top();
        s.push(i);
        }
        return ans;
    }
    vector<int>  prevSmallerElement(int *arr, int n){
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i = 0; i<n; i++){
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()]>= curr){
                s.pop();
            }
        ans[i] = s.top();
        s.push(i);
        }
       return ans;
    }
    int largestRectangularArea(int *heights, int n){
        vector<int>next(n);
        next= nextSmallerElement(heights, n);
       
        vector<int>prev(n);
        prev= prevSmallerElement(heights, n);

      int area = -1;
      for(int i = 0; i<n; i++){
        int l = heights[i];
         
        if(next[i] == -1){
            next[i] = n;
        }
       int b= next[i] - prev[i]-1 ;   
       int newArea = l*b;
       if(area<newArea){
        area= newArea;
       }
      
      }
      return area;
    }

    public:
    int maxArea(int M[4][4] , int n , int m){
        // compute area for first row
          int area = largestRectangularArea(M[0],m);
         
        // for remaining rows:- 
        for(int i =1; i<n; i++){
            for(int j =0; j<m; j++){
                if(M[i][j] !=0)
                M[i][j] = M[i][j] + M[i-1][j];
                else
                M[i][j] =0;
            }
            // entire row is updated now 
            int newArea = largestRectangularArea(M[i], m);
         
            if(area<newArea){
                area= newArea;
            }
        }
        return area;
    }

};
int main(){
int arr[4][4]= {
    {1,1,0,0},
    {1,0,1,1},
    {1,1,1,1},
    {1,1,1,0}
};
solution s;
int area = s.maxArea(arr, 4,4);
cout<<"Max area in given matrix is "<<area<<endl;
}