//week02-4.cpp leetcode �ǲ߭p�e�ĤG�D
//389.find the difference ���G�Ӧr��t���r��
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};//�i�α�l�˦r���A�j�A���N��@�}�l�Ū�
        for(int i=0;i<s.length();i++){//�r����for�j��
                char c=s[i];
                A[c]++;//��r�����l��
        }
        for(int i=0;i<t.length();i++){//�r����for�j��
            char c=t[i];
            A[c]--;
            if(A[c]<0) return c;
        }
        return 0;//���|�Ψ�o��
    }
};
