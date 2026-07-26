class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int ans = 0;

        while (i < n) {

            while (i < n && nums[i] == 0)
                i++;

            int j = i;

            while (j < n && nums[j] == 1)
                j++;

            ans = max(ans, j - i);

            i = j;
        }

        return ans;
    }
};