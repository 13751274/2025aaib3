#week01-2a.py leetcode 學習計畫python 版本1 for迴圈
#leetcode 28.find the index of the first occurrence in a string
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack) #字串長度
        N=len(needle) #字串長度
        #sadbutsad
        #sad i:0
        #sad i:1
        #...
        #sad i:6
        for i in range(H-N+1):
            if haystack[i:i+N]==needle:
            #把字串從i開始 取到i+N結束 共N個字
                return i #成功找到位置
        return -1 #沒有成功
