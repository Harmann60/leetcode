//3 January 2026
// 1480. Running Sum of 1D Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i] = nums[i] + nums[i-1];
        }
        return nums;        
    }
};

//Last night in himachal , i love this place alot and i realise the importance of this place when i moved out to different city
