//week04-5.cpp
//leetcode
//�q�k����
//1,9,9
//    0
//  0
//2
//1,2,3
//    4
//9,9,9
//1,0,0,
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();//�����D�}�C������ �H�K�˹L�Ӫ��j��
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9)digits[i]-0;//�i���ܦ�0
            else{
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
