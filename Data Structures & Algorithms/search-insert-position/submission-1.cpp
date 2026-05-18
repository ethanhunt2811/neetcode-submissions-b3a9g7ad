class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int s = 0;
        int e = n;
        int index = 0;

        while(s <= e)
        {
            int mid = s + (e-s)/2;

            if(nums[mid] > target)
            {
                e = mid - 1;
                index = mid -1;
            }
            else if(nums[mid] < target)
            {
                s = mid + 1;
                index = mid;
            }
            else
            {
                return  mid;
            }
        }    
        return index +1; 
    }
}; 