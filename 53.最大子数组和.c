/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子数组和
 */

// @lc code=start
int maxSubArray(int* nums, int numsSize) {
  int* dp = (int*)malloc(sizeof(int) * numsSize);
  dp[0] = nums[0]; 
  int max_sum = nums[0];

  for (int i = 1; i < numsSize; ++i) {
    dp[i] = (dp[i-1] > 0 ? dp[i-1] : 0) + nums[i];
    if (dp[i] > max_sum) {
      max_sum = dp[i];
    }
  }
  
  free(dp);
  return max_sum;
}
// @lc code=end

