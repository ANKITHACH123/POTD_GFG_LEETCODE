// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<int> primef(int n)
{
    int c=0;
    vector<int>v1;
    while(n%2==0)
    {
        n=n/2;
        v1.push_back(2);
    }
    int i=3;
    while(i<sqrt(n))
    {
        if(n%i==0)
        {
            n=n/i;
            v1.push_back(i);
            i=i;
        }
        else
        {
            i=i+1;
        }
    }
    if(n>2) v1.push_back(n);
    return v1;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=1;
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            vector<int>p=primef(a[i]);
            for(int i=0;i<p.size();i++)
            {
                cout<<endl;
                mpp[p[i]]++;
            }
            
        }
        for(auto it:mpp)
        {
            c*=(it.second+1);
        }
        cout<<c<<endl;
        t-=1;
    }
}