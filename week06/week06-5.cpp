//week06-5.cpp
//3350
//跟昨天很像 今天問罪可能的k
//用兩個COMBO
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N=nums.size();//陣列大小
        vector<int>left(N,1);
        vector<int>right(N,1);//右到左
        for(int i=1;i<N;i++){
            if(nums[i-1]<nums[i])left[i]=left[i-1]+1  ;
    }
    for(int i=N-2;i>=0;i--){
        if(nums[i]<nums[i+1])right[i]=right[i+1]+1;
    }
    int ans=0;
    for(int i=0;i<N-1;i++){
        int now=min(left[i],right[i+1]);//現在這左邊右邊combo都符合
        if(now>ans)ans=now;//有更大的K 就用來更新ans
    }
    return ans;
    }
};
