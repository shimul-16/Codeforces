#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        char ch = s1[0];
        s1[0]=s2[0];
        s2[0]=ch;
        cout<<s1<<" "<<s2<<endl;
    }
}