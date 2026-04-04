class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //unordered_map<char, int> mp;
        string ans = "";

        string prefix = strs[0];
        int match = 0;

        for(int i=0;i<strs[0].size();i++)
        {
            char curr = strs[0][i];
            for(int j =1;j<strs.size();j++)
            {
                if(i> strs[j].size() || curr != strs[j][i])
                {
                    return ans;
                }
            }
                ans += curr;
        }
        return ans;
    }
};