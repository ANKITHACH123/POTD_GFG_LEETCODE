#include<bits/stdc++.h>
using namespace std;
int N=1e6+1;
void generateseive(vector<int>&seive)
{
    seive[0]=0;
    seive[1]=0;
    for(int i=2;i*i<=N;i++)
    {
        if(seive[i]==1)
        {
            for(int j=i*i;j<N;j+=i)
            {
                seive[j]=0;
            }
        }
    }
}
int main()
{
    int l,r;
    cin>>l>>r;
    vector<int>seive(1e6+1,1);
    generateseive(seive);
    int q=(int)sqrt(r);
    vector<int>primes;
    for(int i=2;i<=q;i++)
    {
        if(seive[i]==1)
        {
            primes.push_back(i);
        }
    }
    vector<int>dummy(1000,1);
    for(int i=0;i<primes.size();i++)
    {
        int q=l/primes[i];
        int w=q*primes[i];
        if(w<l)
        {
            w=w+primes[i];
        }
        int ind=w-l;
        int u=primes[i];
        
        for(int i=ind;i<1000;i+=u)
        {
            dummy[i]=0;
        }
    }
    for(int i=0;i<(r-l)+1;i++)
    {
        cout<<dummy[i]<<" ";
    }
}