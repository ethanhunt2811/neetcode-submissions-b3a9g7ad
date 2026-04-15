class Solution {
public:
    bool check_palindrome(string s)
    {
        int i =0;int j = s.length()-1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string remove_char(string tmp, int j)
    {
        string ret = "";
        for(int i =0;i<tmp.length();i++)
        {
            if(i != j)
            {
                ret.push_back(tmp[i]);
            }
        }
        return ret;
    }

    bool validPalindrome(string s) {
        vector<char>t(36, 0);
        string tmp =s;
        bool ans = false;
         if (check_palindrome(s))
            {
                return true;
            }
        for(int i=0;i<s.length();i++)
        {
            string modified = remove_char(tmp, i);  // FIX 3: don't keep modifying tmp

            if (check_palindrome(modified))
            {
                return true;
            }
        }
        return false;
    }
};