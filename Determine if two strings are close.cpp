class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v;
        vector<int>v1;
        map<char,int>mp;
        map<char,int>mpp;
        for(int i=0;i<word1.size();i++){
            mp[word1[i]]++;
        }
        for(auto i:mp){
            v.push_back(i.second);
        }
        for(int i=0;i<word2.size();i++){
            mpp[word2[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            if(mp.find(word2[i])==mp.end()){
                return false;
            }
        }
        for(auto it:mpp){
            v1.push_back(it.second);
        }
        if(v1.size()==v.size()){
        sort(v1.begin(),v1.end());
        sort(v.begin(),v.end());
        int n=v1.size();
        int m=v.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(v[i]!=v1[i]){
                c+=1;
            }
        }
        if(c==0){
            return true;
        }
        else{
            return false;
        }
        }
        else{
            return false;
        }
    }
};