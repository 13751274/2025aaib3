//week06-1.cpp
//leetcode �ǲ߭p�e242
//����Ӧr�� �ЧP�_�L�̥αo�r�� �O�_���ۦP(�i������)
class Solution {
public:
    bool isAnagram(string s, string t) {
        //���ݦr����׬O�_�ۦP
        if(s.length()!=t.length())return false;//���P�N��������

        //����r��s���r���ֿn�@�U
        int R[26]={};//�n���@��recycle�^����Ӥ����ڭ̪��r��
        for(int i=0;i<s.length();i++){
            char c=s[i]-'a';//���ӬO�p�g�r�� ���n�ܦ�0-25�ҥH�n��
            R[c]++;
        }
        //��ֿn���r����t�Ψ���� ��n�Χ�(����W�L)
        for(int i=0;i<t.length();i++){
            char c=t[i]-'a';
            R[c]--;//�α��L
            if(R[c]<0)return false;//������ �N����
        }
        return true;
    }
};
