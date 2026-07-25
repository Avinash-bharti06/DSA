class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n = nums.size();
        int sum = n + n*(n-1)/2;
        int curr_sum =0 ;
        for( int i : nums) curr_sum += i;
        int res = sum - curr_sum;
        int mn = *min_element(nums.begin(),nums.end());
        if(mn!=0) return 0;
        return res>0 ? res : n+1;

    }
};