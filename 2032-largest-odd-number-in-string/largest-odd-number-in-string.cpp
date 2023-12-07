class Solution {
public:
    string largestOddNumber(string s) {
        string  ss="";
        reverse(s.begin(),s.end());
        for (int i = 0; i < s.length(); ++i) {
            if(s[i]%2){
                ss=s.substr(i);
                break;

            }
        }
        reverse(ss.begin(),ss.end());
        return ss;



        
    }
};