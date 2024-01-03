class Solution {
public:
   int numberOfBeams(vector<string>& bank) {
vector<int> res(1);
    for (int i = 0; i < bank.size(); ++i) {
        int cnt=0;
        for (int j = 0; j < bank[i].size(); ++j) {
            if(bank[i][j]=='1') cnt++;
        }
        if(cnt>0) res.push_back(cnt);
    }
    
    int ans=0;
    for (int i = 0; i < res.size()-1; ++i) {
        ans+=res[i]*res[i+1];
    }
    return ans;

}
};