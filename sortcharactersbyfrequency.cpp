class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mpp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string k="";
        for(auto it:v){
            k+=string(it.first,it.second);
        }
        return k;
    }
};
