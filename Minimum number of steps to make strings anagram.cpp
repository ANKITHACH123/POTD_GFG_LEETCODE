class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        map<char,int>mpp;
        int c=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mpp[t[i]]++;
        }
        for (auto it:mp) {
            auto i = mpp.find(it.first);
            if (i != mpp.end()) 
            {
                if (it.second - i->second > 0) 
                {
                    c+=(it.second - i->second);
                }
            } 
            else 
            {
                c+=it.second;
            }
        }
        return c;
    }
};