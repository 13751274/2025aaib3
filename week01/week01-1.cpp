//week01-1.cpp
//leetcode 學習計畫 大海撈針 在haystack 找到 needle
//find the indes of the first occurrence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        //要用迴圈 把所有可能的位置都找一次
        //ex. sadbutsad 很難找 要找sad
        //i;0 sad 把hatstack 檢前面N個字母
        int H=haystack.length(),N=needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N)==needle)return i;
            //從i開始 剪出N個字母 竟然相同 找到答案
        }
        return -1;//沒有找到答案
    }
};
