#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>> v[i];
    int x;
    cin>>x;
    stack<int> s;
    int a=1;
    for(int i=0; i<n; i++){
        if(v[i]>a){
            s.push(v[i]);
        }
        else if(v[i]==a){
            a++;
        }
    }
    bool res=true;
    while(!s.empty()){
        int t=s.top();
        s.pop();
        if(!s.empty() && t>s.top()){
            res=false; break;
        }
    }
    if(res) cout<< "yes";
    else cout<< "no";
    return 0;
}
