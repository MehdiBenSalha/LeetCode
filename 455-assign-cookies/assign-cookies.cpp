class Solution {
public:
 int findContentChildren(vector<int>& g, vector<int>& s) {
     sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int res=0;
        int i=0,j=0;
        while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                res++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return res;
    }
};