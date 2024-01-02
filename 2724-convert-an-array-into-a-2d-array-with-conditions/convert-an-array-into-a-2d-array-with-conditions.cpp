class Solution {
public:
vector<vector<int>> findMatrix(vector<int>& nums) {
    vector<vector<int>> res(nums.size());
    map<int,int>mp;
    for(auto x:nums) mp[x]++;
    for(auto x:mp){
        int k=x.second;
        for (int i = 0; i < k; ++i) {
            res[i].push_back(x.first);
        }
    }
    vector<vector<int>> ress;
    for (int i = 0; i < res.size(); ++i) {
        if(res[i].size()!=0) ress.push_back(res[i]);
    }
    return ress;
}
};