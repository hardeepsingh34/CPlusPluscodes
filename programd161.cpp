#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<queue>
using namespace std;
class solution{
public:
string FirstNonRepeating(string A){
    unordered_map<char, int>count;
    queue<int>q;
    string ans ="";

    for(int i =0 ; i<A.length(); i++){
        char ch = A[i];

        // increase count 
<<<<<<< HEAD
        // ds
=======
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
        count[ch]++;

        //queue me push karo
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()]>1){
                //repeating character
                q.pop();
            }else{
                // non repeating character
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty())
        ans.push_back('#');
    }
    return ans;
}
};
int main(){
string a= "hheaeptii";
solution s;
string ans =s.FirstNonRepeating(a);
cout<<ans;

}