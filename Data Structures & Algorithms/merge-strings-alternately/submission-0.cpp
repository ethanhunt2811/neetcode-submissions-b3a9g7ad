class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int m = word1.length();
        int n = word2.length();
        int i=0;int j=0;
        int turn = 0;

        while(i<m && j<n)
        {
            if(!turn)
            {
                //cout<<"here"<<endl;
                ans += word1[i];
                ans += word2[j];
                //turn = 1;
            }
            i++;
            j++;
        }

        while(i<m)
        {
            ans+= word1[i];
            i++;
        }

        while(j<n)
        {
            ans += word2[j];
            j++;
        }

        return ans;
    }
};