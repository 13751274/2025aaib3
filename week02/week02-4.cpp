//week02-4.cpp leetcode 學習計畫第二題
//389.find the difference 找到二個字串差哪字母
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};//可用桶子裝字母，大括號代表一開始空的
        for(int i=0;i<s.length();i++){//字母的for迴圈
                char c=s[i];
                A[c]++;//把字母放桶子裡
        }
        for(int i=0;i<t.length();i++){//字母的for迴圈
            char c=t[i];
            A[c]--;
            if(A[c]<0) return c;
        }
        return 0;//不會用到這行
    }
};
