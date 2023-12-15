class Solution {
public:
string destCity(vector<vector<string>>& paths) {
map<string ,int> left,right;
    for (int i = 0; i < paths.size(); ++i) {
        left[paths[i][0]]++;
        right[paths[i][1]]++;
    }
    for(auto x:right){
        if(left[x.first]==0 && x.second==1) return x.first;
    }
    return "";
}
};