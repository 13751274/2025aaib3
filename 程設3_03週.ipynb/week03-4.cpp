//week03-4.cpp
//leetcode挑戰題120.
class Solution {//使用動態規劃 慢慢更新陣列
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]第i層的第j個數
        int N=triangle.size();
        //從下往上查 最下面的第N-1層 沒問題 就是本身最小值 所以N-2往上更新
        for(int i=N-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
                //每個人要看下面2個選擇 找最小的那個
            }
        }
        return triangle[0][0];
    }
};
