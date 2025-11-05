//week09-4.cpp
//54.
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        int top=0,bottom=M-1,left=0,right=N-1;
        vector<int>ans;
        while(top<=bottom && left<=right){
            for(int j=left;j<=right;j++){
                ans.push_back(matrix[top][j]);
            }
            top++;//每完成一個方向 就收縮對應的邊界
            if(top>bottom)break;//要檢查 是否提早結束
            for(int i=top;i<=bottom;i++){//沿right右邊界
                ans.push_back(matrix[i][right]);
            }
            right--;//收縮右邊界
            if(left>right)break;
            for(int j=right;j>=left;j--){//沿bottom下邊界
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;//收縮右邊界
            if(top>bottom)break;
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            if(left>right)break;
        }
        return ans;
    }
};
