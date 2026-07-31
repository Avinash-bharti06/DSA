class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

int mid = (n + 1) / 2;

vector<int> left(nums.begin(), nums.begin() + mid);
vector<int> right(nums.begin() + mid, nums.end());

reverse(left.begin(), left.end());
reverse(right.begin(), right.end());

int i = 0, j = 0;

for (int k = 0; k < n; k++) {
    if (k % 2 == 0)
        nums[k] = left[i++];
    else
        nums[k] = right[j++];
}
    }
};