// week11-2.cpp 學習計畫 Math 第2題
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        // int total = 0; // 不能用整數, 因為除法要有小數點
        double total = 0; // 要有小數點
        int M = salary[0], m = salary[0]; // 先挑1個人,身兼最大值、最小值
        for (int i=0; i<salary.size(); i++) {
            total += salary[i];
            if (salary[i] > M) M = salary[i]; // 更大的,換掉
            if (salary[i] < m) m = salary[i]; // 更小的,換掉
        }
        // 這是錯的!!! 漏了把最大、最小刪掉
        return (total-M-m) / (salary.size()-2);
    }
};
