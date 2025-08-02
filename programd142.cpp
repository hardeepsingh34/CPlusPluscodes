#include<iostream>
#include<stack>
using namespace std;
bool isvalidParenthesis(string expression){
    stack<char>s;
    for(int i =0; i<expression.length(); i++){
        char ch = expression[i];
        if(ch=='{' || ch =='[' ||ch=='('){
            s.push(ch);
        }else{
            //for closing bracket
            if(!s.empty()){
                char top = s.top();
                if((ch==')' && top == '(') || (ch==']' && top == '[') ||(ch=='}' && top == '{') ){
                    s.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }
    }
int main(){
string a = "{([()])}";
cout<<"\n\n";
if(isvalidParenthesis(a)==1){
    cout<<"yes, given parenthesis is valid "<<endl;
}else{
    cout<<"No, given parenthesis is invalid "<<endl;
}
cout<<"\n\n";
}