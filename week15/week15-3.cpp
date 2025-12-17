//week15-3.cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //解法簡單 把s+s的頭尾各扣一個字母
        // 再找有沒有s本身
        string s2=s+s;//兩倍長
        string s3=s2.substr(1,s2.length()-2);
        return s3.find(s)!=string::npos;
    }
};
