class Solution {
public:
 int maxWidthOfVerticalArea(vector<vector<int>>& points) {
vector<int> res;
    for (int i = 0; i < points.size(); ++i) {
        res.push_back(points[i][0]);
    }
    sort(res.begin(),res.end());
    int ans=0;
    for (int i = 1; i < res.size(); ++i) {
        ans=max(ans,res[i]-res[i-1]);
    }
    return ans;
}
};