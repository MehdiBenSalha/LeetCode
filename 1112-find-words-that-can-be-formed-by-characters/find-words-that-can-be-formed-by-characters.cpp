class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
    map<char,int>mp;
    for(auto x:chars) mp[x]++;
    for(auto x:words){
        map<char,int>mp2;
        for(auto y:x) mp2[y]++;
        bool ok=true;
        for(auto y:mp2){
            if(mp[y.first]<y.second) ok=false;
        }
        if(ok) ans+=x.length();
    }
    return ans;
        
    }
};