class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty())
        {
            return 0;
        }
        int count = 1;
        map<int, int> mp;

        for(auto i:nums)
        {
            mp[i]++;
        }

auto prev_it = mp.begin();
int ans = 1;

for (auto it = next(mp.begin()); it != mp.end(); it++) {
    if(prev_it->first + 1 == it->first)
    {
        count++;
    }
    else
    {
        count =1;
    }

    ans = max(ans, count);
    prev_it = it;
}

        return ans;
    }
};
