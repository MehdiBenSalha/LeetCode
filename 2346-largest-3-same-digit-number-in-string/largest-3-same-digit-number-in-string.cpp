class Solution {
public:
    string largestGoodInteger(string num) {
string s=num;
         string mx="";
        set<char> st;

        for (int i = 0; i <s.length()-3; ++i) {
            string x=s.substr(i,3);
            st.clear();
            for (int j = 0; j <3 ; ++j) {
                st.insert(x[j]);
            }
            if(st.size()==1) mx=max(mx,x);



        }
        string x=s.substr(s.length()-3,3);

        st.clear();
        for (int j = 0; j <3 ; ++j) {
            st.insert(x[j]);
        }
        if(st.size()==1) mx=max(mx,x);

        return mx;



        
    }
};