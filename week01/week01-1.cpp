//week01-1.cpp
//leetcode �ǲ߭p�e �j�����w �bhaystack ��� needle
//find the indes of the first occurrence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�n�ΰj�� ��Ҧ��i�઺��m����@��
        //ex. sadbutsad ������ �n��sad
        //i;0 sad ��hatstack �˫e��N�Ӧr��
        int H=haystack.length(),N=needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N)==needle)return i;
            //�qi�}�l �ťXN�Ӧr�� ���M�ۦP ��쵪��
        }
        return -1;//�S����쵪��
    }
};
