class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos,neg;
        for(int i : nums){
            i>=0 ? pos.push_back(i) : neg.push_back(i);
        }
        int p = 0, q = 0;

        for (int i = 0; i < n; i++) {
            i % 2 == 0 ? nums[i] = pos[p++] : nums[i] = neg[q++];
        }
        return nums;
    }
};