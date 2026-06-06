class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int cntr=1, max_cntr=1;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1) {
                cntr++;
            } else if(nums[i]==nums[i-1]) {
                continue;
            } else {
                cntr = 1;
            }
            max_cntr = max(max_cntr, cntr);
        }
        return max_cntr;
    }
};