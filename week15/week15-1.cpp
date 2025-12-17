//week15-1.cpp
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dx=coordinates[1][0]-coordinates[0][0];//x
        int dy=coordinates[1][1]-coordinates[0][1];//y
        //比例相等 dy:dx=dy2:dx2
        //交叉相乘 dx*dy2==dy*dx2
        for(int i=2;i<coordinates.size();i++){
            int dx2=coordinates[i][0]-coordinates[0][0];
            int dy2=coordinates[i][1]-coordinates[0][1];
            if(dx*dy2!=dy*dx2)return false;
        }
        return true;
    }
};
