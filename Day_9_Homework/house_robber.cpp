class solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        if (nums[0] > nums[1])
            dp[1] = nums[0];
        else
            dp[1] = nums[1];
        for (int i = 2; i < n; i++)
        {
            int sh = dp[i - 1];
            int rh = nums[i] + dp[i - 2];
            if (sh > rh)
            {
                dp[i] = sh;
            }
            else
            {
                dp[i] = rh;
            }
        }
        return dp[n - 1];
    }
};