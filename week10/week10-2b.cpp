// week10-2b.cpp 學習計畫 Math 的第1題 (用數學來解他)
// 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2; // 大約有一半,是奇數
        if (low%2==1 || high%2==1) ans++; //有多1個奇數 ++
        return ans;
    }
};
