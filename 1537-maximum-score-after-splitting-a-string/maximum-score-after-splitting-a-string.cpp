class Solution {
public:
 int maxScore(string s) {
        int o=0,z=0;
        for(auto x:s){
            if(x=='0') z++;
            else o++;
        }
        int ans=0;
        int oo=0,zz=0;
        if(s[0]=='0') zz++;
        else oo++;
        for(int i=1;i<s.size()-1;++i){
             ans=max(ans,zz+o-oo);
            if(s[i]=='0') zz++;
            else oo++;
            ans=max(ans,zz+o-oo);
        }
        if(s=="11" || s=="00") return 1;
        if(s=="01") return 2;
        if(s=="10") return 0;
        return ans;

    }
};