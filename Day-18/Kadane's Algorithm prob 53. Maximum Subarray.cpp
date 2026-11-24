// 53. Maximum Subarray 
// prob link : https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = 0 , maxSum = INT_MIN;

        for (int value : nums){
            curSum += value; 
            maxSum = max(curSum,maxSum);

            if (curSum < 0){
                curSum = 0;
            }
        }
        return maxSum;
    }

};
