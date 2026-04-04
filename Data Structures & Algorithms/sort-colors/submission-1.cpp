class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int j =0;
        int one = -1;
        int zero = -1;
        int two = -1;

        for(auto i: nums)
        {
            if(i == 1)
            {
                nums[++two] = 2;
                nums[++one] = 1;
                //nums[++] = 1;
            }
            else if(i == 0)
            {
                //nums[++zero] = 0;
                nums[++two] = 2;
                nums[++one] = 1;
                nums[++zero] = 0;
            }
            else
            {
                nums[++two] = 2;
            }

        }
    }
};