//week09-2.cpp
//leetcode 73.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第一步 先找所有的0 而且記下他的位置
        int M=matrix.size(),N=matrix[0].size();
        vector<bool>markI(M),markJ(N);//標記i標記j
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){//遲到0 記下
                    markI[i]=true;//i標記起來
                    markJ[j]=true;//j標記起來
                }
            }
        }
        //第二步 把記下的位置 他的橫直都設0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==true || markJ[j]==true)matrix[i][j]=0;
            }
        }
    }
};
