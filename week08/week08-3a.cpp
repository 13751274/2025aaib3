//week08-3a.cpp
//1275.
//看起來 3*3陣列 所以開int a[3][3]={}陣列 再用myprint()印出
class Solution {
public:
    void myprint(int a[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={};//有大括號會給0
        int now=1;
        for(vector<int>move:moves){
            int i=move[0],j=move[1];
            a[i][j]=1;//玩家A 第一個玩家
            myprint(a);//把陣列印出來 小幫手
            if(now==1)now=2;
            else now =1;
        }
        return"A";//先隨便return
    }
};
