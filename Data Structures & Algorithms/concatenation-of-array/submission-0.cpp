class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr;

        for(int i=0;i<2*nums.size();i++)
        {
            int index = i;
            if(index >= nums.size())
            {
                index = i - nums.size();
            }
            arr.push_back(nums[index]);
        }
        return arr;
    }
};