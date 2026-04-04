class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {
            if (visited[i]) continue;

            map<char, int> mp;
            vector<string> st;

            // count freq of current string
            for (auto ch : strs[i]) {
                mp[ch]++;
            }

            st.push_back(strs[i]);
            visited[i] = true;

            // compare with remaining strings
            for (int j = i + 1; j < strs.size(); j++) {
                if (visited[j]) continue;

                map<char, int> mp1;
                for (auto ch : strs[j]) {
                    mp1[ch]++;
                }

                // compare maps
                if (mp == mp1) {
                    st.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(st);
        }

        return ans;
    }
};