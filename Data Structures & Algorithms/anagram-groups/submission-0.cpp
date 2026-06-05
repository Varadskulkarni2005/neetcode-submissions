class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false);

        for(int i = 0; i < strs.size(); i++) {

            if(visited[i])
                continue;

            vector<string> tempans;
            tempans.push_back(strs[i]);
            visited[i] = true;

            for(int j = i + 1; j < strs.size(); j++) {

                if(visited[j])
                    continue;

                if(strs[i].size() == strs[j].size()) {

                    int count[26] = {0};

                    for(char c : strs[i])
                        count[c - 'a']++;

                    for(char c : strs[j])
                        count[c - 'a']--;

                    bool isAnagram = true;

                    for(int k = 0; k < 26; k++) {
                        if(count[k] != 0) {
                            isAnagram = false;
                            break;
                        }
                    }

                    if(isAnagram) {
                        tempans.push_back(strs[j]);
                        visited[j] = true;
                    }
                }
            }

            ans.push_back(tempans);
        }

        return ans;
    }
};