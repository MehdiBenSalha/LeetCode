class Solution {
public:
   int maxLengthBetweenEqualCharacters(string s) {
map<char,vector<int>>mp;
for (int i = 0; i < s.size(); ++i) {
    mp[s[i]].push_back(i);
}
int ans=-1;
for(auto x:mp){
    if(x.second.size()>1){
        ans=max(ans,x.second.back()-x.second[0]-1);
    }
    
}
return ans;
}
};