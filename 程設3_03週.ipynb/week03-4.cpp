//week03-4.cpp
//leetcode�D���D120.
class Solution {//�ϥΰʺA�W�� �C�C��s�}�C
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]��i�h����j�Ӽ�
        int N=triangle.size();
        //�q�U���W�d �̤U������N-1�h �S���D �N�O�����̤p�� �ҥHN-2���W��s
        for(int i=N-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
                //�C�ӤH�n�ݤU��2�ӿ�� ��̤p������
            }
        }
        return triangle[0][0];
    }
};
