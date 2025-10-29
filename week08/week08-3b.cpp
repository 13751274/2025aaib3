//week08-3b.cpp
//1275.
//看起來 3*3陣列 所以開int a[3][3]={}陣列 再用myprint()印出
class Solution {
public:
    //myprint()小幫手程式刪掉
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};//有大括號會給0
        int now=1;
        int winner=0;
        for(vector<int>move:moves){
            int i=move[0],j=move[1];
            a[i][j]=now;//玩家A 第一個玩家
            //myprint(a);//把陣列印出來 小幫手
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now)winner=now;
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now)winner=now;
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now)winner=now;
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now)winner=now;
            if(now==1)now=2;
            else now =1;
        }
        if(winner==1)return "A";
        else if(winner==2)return "B";
        else if (moves.size()==9)return"Draw";//先隨便return
        else return "Pending";
    }
};
