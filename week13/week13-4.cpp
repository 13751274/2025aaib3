//week13-4.cpp
//第一題 神秘的入口
//用my playground可以寫程式
int main() {
    char c;
    int d;
    int now=50;
    int ans=0;
    while (cin>>c>>d){
        //if(c=='L')cout<<"往左轉"<<d<<"格\n";
        //if(c=='R')cout<<"往右轉"<<d<<"格\n";

        if(c=='L') now-=d;//往左轉 剪掉他
        if(c=='R') now+=d;//往右轉 加上他
        now=(now%100+100)%100;//取餘數 +100 再取餘數 得到0-99
        if(now==0)ans++;
        //cout<<"現在到達格子刻度"<<now<<"\n";
    }
    cout<<"答案是:"<<ans;//會有自己的答案
}
