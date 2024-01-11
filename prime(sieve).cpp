#include<bits/stdc++.h>
using namespace std;
int n=1e6+1;
vector<long long>primes(n,1);
void gen(vector<long long>&primes){
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i*i<=n;i++){
        if(primes[i]==1){
        for(int j=(i*i);j<n;j+=i){
            primes[j]=0;
        }
        }
    }
}
int main(){
    gen(primes);
    long long t;
    cin>>t;
    if(primes[t]==1) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
}
