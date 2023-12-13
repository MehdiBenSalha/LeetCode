class Solution {
public:
  

int numSpecial(vector<vector<int>>& mat) {
    int m=mat.size();
    int n=mat[0].size();
    int res=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                int cnt=0;
                for(int k=0;k<n;k++){
                    if(mat[i][k]==1) cnt++;
                }
                for(int k=0;k<m;k++){
                    if(mat[k][j]==1) cnt++;
                }
                if(cnt==2) res++;
            }
        }
    }
    return res;

}
};