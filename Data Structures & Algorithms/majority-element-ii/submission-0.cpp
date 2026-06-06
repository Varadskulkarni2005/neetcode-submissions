class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size()/3;
        
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto a:freq){
            if(a.second > n ){
                ans.push_back(a.first);
            }
        }
        return ans;
        
    }
};