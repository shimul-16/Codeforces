#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<char,int>m;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            m[s[j]]++;
        }
    char ch1;
    char ch2;
    int max = 0;
    int min = n;
    int count = 0;
    for(auto it=m.begin();it!=m.end();it++){
       if(max<it->second){
        max=it->second;
        ch1=it->first;
       }
       
    }
    for(auto it=m.begin();it!=m.end();it++){
    if(min>it->second){
        if(it->first == ch1) continue;
        else{
        min=it->second;
        ch2=it->first;
        count =1;
        }
    }
    }
    if(count==0) cout<<s<<endl;
    else{
    for(int i=0;i<n;i++){
        if(s[i]==ch1) {
        max=i;
        break;
        } 
    }
    for(int i=0;i<n;i++){
        if(s[i]==ch2) {
        min=i;
        break;
        } 
    }
    s[min]=s[max];
    cout<<s<<endl;
    }
m.clear();
}
}


