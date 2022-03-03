#include <bits/stdc++.h>
 
using namespace std;    
 
int scoreOfParentheses(string S) {
    stack<int> c;
    c.push(0); // The score of the current frame, at depth zero.
    int score=0,count=0;
 
    for(int i=0; i<S.size(); ++i){
        if(S[i]=='(')   
            c.push(0);
        else{
            int v = c.top();
            c.pop();    
            int w = c.top();
            c.pop();
 
            score = max(2*v , 1); // edge case 
            c.push(w+score);
        }
    }
    return c.top();
}
 
int main(){
    string s;
    cin>>s;
    cout<<scoreOfParentheses(s);
    return 0;
}