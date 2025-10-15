//week06-1.cpp
//leetcode 學習計畫242
//給兩個字串 請判斷他們用得字母 是否都相同(可換順序)
class Solution {
public:
    bool isAnagram(string s, string t) {
        //先看字串長度是否相同
        if(s.length()!=t.length())return false;//不同就直接失敗

        //先把字串s的字母累積一下
        int R[26]={};//要有一個recycle回收桶來分類我們的字母
        for(int i=0;i<s.length();i++){
            char c=s[i]-'a';//本來是小寫字母 但要變成0-25所以要減
            R[c]++;
        }
        //把累積的字母看t用到哪些 剛好用完(不能超過)
        for(int i=0;i<t.length();i++){
            char c=t[i]-'a';
            R[c]--;//用掉他
            if(R[c]<0)return false;//不夠用 就失敗
        }
        return true;
    }
};
