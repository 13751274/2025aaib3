//week03-2a.cpp
//leetcode �ǲ߭p�e�ĤK�D 1822.
//��}�C���_�� �ݬO���� �t�� �٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//�]��0������Ƴ���0
        for(int i=0;i<nums.size();i++){
            ans *=nums[i];
        }//�Ʀr�V���V�j
        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;
    }
};
