#week01-2a.py leetcode �ǲ߭p�epython ����1 for�j��
#leetcode 28.find the index of the first occurrence in a string
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack) #�r�����
        N=len(needle) #�r�����
        #sadbutsad
        #sad i:0
        #sad i:1
        #...
        #sad i:6
        for i in range(H-N+1):
            if haystack[i:i+N]==needle:
            #��r��qi�}�l ����i+N���� �@N�Ӧr
                return i #���\����m
        return -1 #�S�����\
