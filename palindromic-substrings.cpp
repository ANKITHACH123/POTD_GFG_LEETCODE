class Solution {
public:
    int pal(string s){
        string s1=s;
        reverse(s.begin(),s.end());
        if(s==s1) return 1;
        else return 0;
    }
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            string p;
            for(int j=0;j<=i;j++){
                p+=s[j];
                if(pal(p)==1) c+=1;
            }
        }
        return c;
    }
};
