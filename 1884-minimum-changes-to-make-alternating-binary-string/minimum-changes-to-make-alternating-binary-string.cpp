class Solution {
public:
    int minOperations(string s) {
    string a="01",b="10";
    int ans1=0,ans2=0;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]!=a[i%2]) ans1++;
        if(s[i]!=b[i%2]) ans2++;
    }
    return min(ans1,ans2);

}
};