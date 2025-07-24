# include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int inside=0;
        map<int,int>m;
        int wrong=0;
        int flag=0;
        m[k]=0;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            if(k==l && k==r) m[k]++;
            if(k>=l && k<=r){
            for(int j=l;j<=r;j++){
                m[j]++;
                flag=1;
            }
            }
    }
    if(flag==0) cout<<"NO"<<endl;
    else{
    int max = m[k];
    for(auto it=m.begin();it!=m.end();it++){
       if(it->first == k) continue;
       else if(it->second>=max){
        wrong=1;
        break;
       } 
    }
    if(wrong == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    m.clear();
    }
    }
}

