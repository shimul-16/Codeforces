#include<bits/stdc++.h>
using namespace std;
int rook(int n, int k, queue<pair<int,int>>& q){
     if(n>=2*k-1){
        int x=1,y=1;
        for(int i=k;i>=1;i--){
            q.push({x,y});
            //cout<<x<<" "<<y<<endl;
            x+=2;
            y+=2;
        }
        return 1;
     }
     else return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        queue<pair<int,int>>q;
        int flag = rook(n,k,q);
        if(flag==-1) cout<<"-1"<<endl;
        else{
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==q.front().first && j==q.front().second && !q.empty()){
                        cout<<"R";
                        q.pop();
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
        }
    }
}