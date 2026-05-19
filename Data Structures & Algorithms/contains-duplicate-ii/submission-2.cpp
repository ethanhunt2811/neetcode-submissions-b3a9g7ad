class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;
        int L = 0;

        for(int R=0;R<nums.size();R++)
        {
            if(R - L > k)
            {
                st.erase(nums[L]);
                L++;
            }
            
            if(st.find(nums[R]) != st.end())
            {
                return true;
            }

            st.insert(nums[R]);
        }
        return false;
    }
};