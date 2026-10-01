///week04-4.cpp學習計畫 Basic 第十題
///leetcode 896. Monotonic Array［無聊的陣列］
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int red=0,green=0;///紅色往下綠色往上
        for(int i=0;i<nums.size()-1;i++){
            if (nums[i]<nums[i+1])red++;
            if (nums[i]>nums[i+1])green++;
        }
        if(red==0||green==0)return true;
        return false;
    }
};
