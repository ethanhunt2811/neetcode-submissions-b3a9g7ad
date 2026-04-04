class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        int n = nums.size();
        int j = 0;
        for(int i=0;i<n;i++)
        {
            j = i+1;

            for(;j<n;j++)
            {
                if(nums[i] + nums[j] == target && (i != j))
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
