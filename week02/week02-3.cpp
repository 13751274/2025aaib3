//week02-3.cpp leetcode �ǲ߭p�e�Ĥ@�D
//1768.merge strings alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1=word1.length();//�r�ꪺ����
        int N2=word2.length();
        string ans;//���ת��r�� �@�}�l�S���F��
        for(int i=0;i<max(N1,N2);i++){
            if(i<N1) ans+=word1[i];
            if(i<N2) ans+=word2[i];//�������J����
        }
        return ans;//���׶ǥX�h ����
    }
};
