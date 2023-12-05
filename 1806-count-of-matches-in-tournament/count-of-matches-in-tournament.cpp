class Solution {
public:
    int numberOfMatches(int n) {
        int matchs=0;
         while(n!=1){
             matchs+=n/2;

             if(n%2) n++;
             n/=2;
         }
         return matchs;
    }
};