class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int L =0;
        int maximum = 0;
        unordered_set<char> st;
        
        for(int R=0;R<s.length();R++)
        {
            while(st.find(s[R]) != st.end())
            {
                st.erase(s[L]);
                L++;
            }

            st.insert(s[R]);

             maximum = max(maximum, R - L + 1);
        }
        return maximum ;
    }
};
