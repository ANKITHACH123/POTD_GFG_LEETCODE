class Solution {
public:
    bool halvesAreAlike(string s) {
        int k=s.size();
        //cout<<k/2;
        int c=0,d=0;
        for(int i=0;i<(k/2);i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                c+=1;
            }
        }
        for(int i=((k/2));i<k;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                d+=1;
            }
        }
        //cout<<c<<d;
        if(c==d){
            return true;
        }
        else{
            return false;
        }
    }
};