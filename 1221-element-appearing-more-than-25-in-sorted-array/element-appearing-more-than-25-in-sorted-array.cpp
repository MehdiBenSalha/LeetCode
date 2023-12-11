class Solution {
public:
 int findSpecialInteger(vector<int>& arr) {
    
    int o=1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]) o++;
        else o=1;
        if(o>arr.size()/4) return arr[i];
    }
    return arr[0];

 }
};