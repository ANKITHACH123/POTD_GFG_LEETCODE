#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int i=0,j=n-1,mid=0;
    vector<int>v;
    v.push_back(-1);
    v.push_back(-1);
    while(i<=j){
        mid=(i+j)/2;
        if(arr[mid]==k){
            int p=mid,f=mid;
            while(p>=0 and arr[p]==k){
                v[0]=p--;
            }
            while(f<=n and arr[f]==k){
                v[1]=f++;
            }
            break;
        }
        else{
            if(arr[mid]>k){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
    }
    for(int i=0;i<1;i++){
        cout<<v[0]<<" "<<v[1];
    }
    
}