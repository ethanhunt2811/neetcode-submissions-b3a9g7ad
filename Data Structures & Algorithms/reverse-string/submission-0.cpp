class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int j = n-1;
        for(int i=0;i<n/2;i++)
        {
            cout<<" first "<<s[j]<<" second "<<s[i]<<endl; 
            if(i != j)
            {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
            j--;
        }
    }
};