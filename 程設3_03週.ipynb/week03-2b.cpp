//week03-2b.cpp(���n�u���� �u+1 -1 0)
//leetcode �ǲ߭p�e�ĤK�D 1822.
//��}�C���_�� �ݬO���� �t�� �٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//�]��0������Ƴ���0
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans *=+1;
            if(nums[i]<0) ans *=-1;
            if(nums[i]==0) ans *=0;
        }//�Ʀr�V���V�j
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
