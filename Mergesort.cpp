#include <bits/stdc++.h>
using namespace std;
void merge(vector<string>& arr,int start,int mid,int end){
    vector<string>temp((start+end+1),"");
    int left = start;
    int right = mid+1;
    int index = 0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++,right++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        index++,start++;
    }
}
void mergesort(vector<string>& arr,int start,int end){
    int mid=(start+end)/2;
    if(start==end) return;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    int n;
    cout<<"Enter your row number: ";
    cin>>n;
    vector<string> arr(n,"");
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start = 0;
    int end = n-1;
    mergesort(arr,start,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}