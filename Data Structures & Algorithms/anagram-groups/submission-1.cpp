class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;

        for (string str : strs) {
            string aux = str;
            sort(str.begin(), str.end());
            
            if (map.find(str) != map.end()) {
                map[str].push_back(aux);
            }
            else {
                map[str] = {aux};
            }
        }

        for (const auto& par : map) {
            res.push_back(par.second);
        }

        return res;
    }
};
