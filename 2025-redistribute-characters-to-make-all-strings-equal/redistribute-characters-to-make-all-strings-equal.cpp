class Solution {
public:
   bool makeEqual(vector<string>& words) {
map<char,int>mp;
for(auto x:words){
for(auto y:x){
mp[y]++;
}
}
bool f= true;
for(auto x:mp){
    if(x.second%words.size()!=0){ f=false; break;}
    
}
return f;
}
};