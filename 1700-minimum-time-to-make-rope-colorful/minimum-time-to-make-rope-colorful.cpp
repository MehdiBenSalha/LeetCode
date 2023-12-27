class Solution {
public:
   int minCost(string colors, vector<int>& neededTime) {
int res=0;
vector<pair<int,int>>v;
int l=0,r=0;
for (int i = 0; i < colors.size()-1; ++i) {
    if(colors[i]!=colors[i+1]){
        v.push_back({l,r});
        l=i+1;
        r=i+1;
    }
    else r++;
}
v.push_back({l,r});
for (int i = 0; i < v.size(); ++i) {
    int l=v[i].first;
    int r=v[i].second;
    if(l==r) continue;
    int mn=INT_MIN;
    for (int j = l; j <=r ; ++j) {
        res+=neededTime[j];
        mn=max(mn,neededTime[j]);
    }
    res-=mn;


}
return res;
}
};