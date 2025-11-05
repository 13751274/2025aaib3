//week03-3b.cpp
//leetcode 學習計畫283.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//直接移動nums[k]=nums[i],在k++
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)nums[k++]=nums[i];
        }
        //再用for迴圈放回去
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
