//week03-3b.cpp
//leetcode �ǲ߭p�e283.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//��������nums[k]=nums[i],�bk++
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)nums[k++]=nums[i];
        }
        //�A��for�j���^�h
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
