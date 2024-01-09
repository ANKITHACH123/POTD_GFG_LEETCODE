// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,c=0,j=0,p,d;
    cin>>n;
    vector<long long int>v(n+1,-1);
    v[0]=1;
    //cout<<v[0]<<" "<<v[1];
    for(long long int i=1;i<=n;i++){
        c=0;
        j=0;
        while(v[j]!=-1){
            p=((i)*v[j])+c;
            d=(p%10);
            v[j]=d;
            c=p/10;
            j+=1;
        }
        v[j]=c;
    }
    for(long long int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    return 0;
}