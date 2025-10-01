//week04-5.cpp
//leetcode
//從右往左
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
        int N=digits.size();//先知道陣列的長度 以便倒過來的迴圈
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9)digits[i]-0;//進位變成0
            else{
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
