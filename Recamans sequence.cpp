class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int>v;
        v.push_back(0);
        map<int,int>m;
        for(int i=1;i<n;i++)
        {
            int k=v[i-1]-i;
            if(m[k]==0 and v[i-1]-i>0)
            {
                v.push_back(v[i-1]-i);
                m[v[i-1]-i]++;
            }
            else
            {
                int s=v[i-1]+i;
                v.push_back(v[i-1]+i);
                m[s]++;
            }
        }
        return v;
    }
};
