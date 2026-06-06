class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<pair<int,int>> v;
        for(auto p : freq){
            v.push_back(p);  
        }
        sort(v.begin(), v.end(),
            [](pair<int,int>& a, pair<int,int>& b){
                return a.second < b.second;
            });
        vector<int> ans;
        for(int i = v.size()-k; i < v.size(); i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};