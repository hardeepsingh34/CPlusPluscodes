#include<iostream>
#include<stack>
using namespace std;
bool findRedundentBrackets(string &s){
    stack<char>st;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        if(ch=='('|| ch == '+' || ch =='-'|| ch =='*' || ch == '/'){
            st.push(ch);
        }else{
            // ch ya toh ')' hai or lowercase letter
            if(ch==')'){
                bool isredundent = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top =='('){
                        isredundent = false;
                    }
                    st.pop();
                }
                if(isredundent == true){
                    return true;
                    st.pop();
                }
            }
        }   
    } return false;
}
int main(){
string s = "((a*b)+b)"; 
if(findRedundentBrackets(s)== true){
    cout<<endl<<endl;
    cout<<"given string is redudent means invalid bracket\n\n\n ";
}else{
    cout<<endl<<endl;
    cout<<"given string is not redudent means a valid statement \n\n\n";    
}
}