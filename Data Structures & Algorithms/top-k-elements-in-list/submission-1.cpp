class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        unordered_map<int, int> mp;
        vector<int> ans;

        for(auto i: nums)
        {
            mp[i]++;
        }

        for(auto it: mp)
        {
            pq.push({it.second, it.first});
        }

        while(k-- && !pq.empty())
        {
            auto top = pq.top();

                ans.push_back(top.second);
            
            cout<<top.first<<"  "<<top.second<<endl;
            pq.pop();
        }

        return ans;
    }
};
