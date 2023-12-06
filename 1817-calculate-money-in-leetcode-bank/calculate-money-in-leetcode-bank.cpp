class Solution {
public:
    int totalMoney(int n) {
          int d=n/7;
        int r=n%7;

        int sum=(28 + 7*(3+d))*(d)/2;

        for (int i = 0; i < r; ++i) {
            sum+=d+i+1;
        }


        return sum;
    }
};