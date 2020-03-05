#pragma once
#include<vector>
#include<algorithm>
using namespace std;
class SumOfMaxSubSquence {
    
    public:
        int maxSubArray(vector<int>& nums) {
            int len = nums.size();
            vector<int> dp(len, 0);
            dp[0] = nums[0];
            int max_res = dp[0];
            for (int i = 1; i < len; i++) {
                dp[i] = max(dp[i - 1] + nums[i], nums[i]);
                if (dp[i] > max_res) max_res = dp[i];
            }
            return max_res;
        }
    };