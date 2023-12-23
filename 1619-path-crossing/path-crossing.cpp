class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int>mp;
        mp[{0,0}]=1;
int x=0,y=0;
        for(int i=0;i<path.size();++i){
            if(path[i]=='N') x++;
            else if(path[i]=='S') x--;
            else if(path[i]=='E') y++;
            else y--;
            if(mp[{x,y}]==1) return true;
            mp[{x,y}]=1;
        }
        return false;
     
    }
};