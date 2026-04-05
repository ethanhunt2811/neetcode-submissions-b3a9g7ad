class Solution {
public:

    string encode(vector<string>& strs) {
        
        string ans;
        for(int i=0;i<strs.size();i++)
        {
            int len = strs[i].length();
            string cipher = "";
            cipher += to_string(len) + "#";
            ans += cipher + strs[i];
           
        }
        cout<<"-- "<<ans<<endl;
        return ans;
    }

 vector<string> decode(string s) {
    vector<string> ans;
    int i = 0;

    while (i < s.length()) {
        int len = 0;

        // Step 1: read length
        while (s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        i++; // skip '#'

        // Step 2: extract string of length len
        string tmp = s.substr(i, len);
        ans.push_back(tmp);

        // Step 3: move pointer
        i += len;
    }

    return ans;
}
};
