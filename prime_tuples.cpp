#include <bits/stdc++.h>
using namespace std;
int p=1e6+1;
vector<long long>primes(p,1);
void gen(vector<long long>&primes){
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i*i<=p;i++){
        if(primes[i]==1){
        for(int j=(i*i);j<p;j+=i){
            primes[j]=0;
        }
        }
    }
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    while(n){
        int k,c=0;
        cin>>k;
        gen(primes);
        vector<long long>v1;
        for(int i=1;i<=k;i++){
            if(primes[i]==1) v1.push_back(i);
        }
        /*for(int i=0;i<v1.size();i++){
            cout<<v1[i];
        }*/
        for(int i=0;i<v1.size();i++){
            int gh=(2+v1[i]);
            if(find(v1.begin(),v1.end(),gh)!=v1.end()){
                c+=1;
            }
        }
        cout<<c<<endl;
    n-=1;
    }
}