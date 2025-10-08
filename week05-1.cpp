//week05-1.cpp
//leetcode 學習計畫58.
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//把字串string當iostream的cin 用
        string word;//字串
        //ss>>word;//像是cin>>word一樣 現在ss可以用ss>>word
        //ss>>word;
        while(ss>>word){//一直讀讀到不能讀為止
            //裡面什麼都沒有
        }
        cout<<word;
        return word.length();//隨便寫答案
    }
};
