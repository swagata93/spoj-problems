#include <bits/stdc++.h>

using namespace std;

string rpn(string& str){
    int n=str.length();
    stack<int> stk;
    string res="";
    for(int i=0; i<n; i++){
        if(str[i]=='(' || str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^')
            stk.push(str[i]);
        else if(str[i]>='a' && str[i]<='z')
            res+=str[i];
        else{
            while(!stk.empty() && (stk.top()!='(')){
                res+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<< rpn(str) << endl;
    }
    return 0;
}
