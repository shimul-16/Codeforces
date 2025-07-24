# include<bits/stdc++.h>
using namespace std;
// Divide and Conquer Method

// int maxleft;
// int maxright;
// int CrossingSum(int arr[],int left,int mid,int right){
//     int LeftMax=INT_MIN;
//     int sum=0;
//     maxleft=-1;
//     for(int i=mid;i>=left;i--){
//         sum+=arr[i];
//         if(sum>LeftMax){
//             LeftMax=sum;
//             maxleft=i;
//         }
//     }
//     int RightMax=INT_MIN;
//     sum=0,maxright=-1;
//     for(int i=mid+1;i<=right;i++){
//         sum+=arr[i];
//         if(sum>RightMax){
//             RightMax=sum;
//             maxright=i;
//         }
//     }
//     return LeftMax+RightMax;
// }
// int SubArray(int arr[],int left,int right){
//     if(left==right) return arr[left];
//     int mid=(left+right)/2;
//     int leftsum=SubArray(arr,left,mid);
//     int rightsum=SubArray(arr,mid+1,right);
//     int crossingsum = CrossingSum(arr,left,mid,right);
//     if(leftsum>=rightsum && leftsum>=crossingsum) return leftsum;
//     else if (rightsum>=leftsum && rightsum>=crossingsum) return rightsum;
//     else return crossingsum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // maxleft=-1;
//     // maxright=-1;
//     int maximum=SubArray(arr,0,n-1);
//     cout<<maximum<<endl;
//     cout<<arr[maxleft]<<endl;
//     cout<<arr[maxright]<<endl;
// }

// Kadane's Algorithm


