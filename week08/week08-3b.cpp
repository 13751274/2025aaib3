//week08-3b.cpp
//1275.
//�ݰ_�� 3*3�}�C �ҥH�}int a[3][3]={}�}�C �A��myprint()�L�X
class Solution {
public:
    //myprint()�p����{���R��
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};//���j�A���|��0
        int now=1;
        int winner=0;
        for(vector<int>move:moves){
            int i=move[0],j=move[1];
            a[i][j]=now;//���aA �Ĥ@�Ӫ��a
            //myprint(a);//��}�C�L�X�� �p����
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now)winner=now;
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now)winner=now;
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now)winner=now;
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now)winner=now;
            if(now==1)now=2;
            else now =1;
        }
        if(winner==1)return "A";
        else if(winner==2)return "B";
        else if (moves.size()==9)return"Draw";//���H�Kreturn
        else return "Pending";
    }
};
