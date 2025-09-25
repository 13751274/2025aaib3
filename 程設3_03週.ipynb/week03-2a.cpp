//week03-2a.cpp
//leetcode 厩策璸礶材肈 1822.
//р皚癬ㄓ 琌タ计 璽计 临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//0ヴ计常跑0
        for(int i=0;i<nums.size();i++){
            ans *=nums[i];
        }//计禫禫
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
