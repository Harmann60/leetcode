// 4 January 2026
// 1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich = 0;
        for (auto& i : accounts) {
            int sum = 0;
            for (int money : i) {
                sum += money;
            }
            rich = max(rich, sum);
        }
        return rich;
    }
};       

// Last few hours in Himachal , then i will come back after 5 months with my bestfriend hopefully Ayush Rai then i will show him the real Himachal
