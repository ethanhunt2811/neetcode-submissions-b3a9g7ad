class Solution {
public:
    int search(vector<int>& nums, int target) {
        int end = nums.size();
        int start = 0;

        int mid = start + (end - start)/2;

        while(start < end)
        {
            if(target == nums[mid])
            {
                return mid ;
            }

            if(target > nums[mid])
            {
                start = mid + 1;
            }
            else if(target < nums[mid])
            {
                end = mid;
            }

            mid = start + (end - start)/2;
        } 
        return -1;
    }
};
