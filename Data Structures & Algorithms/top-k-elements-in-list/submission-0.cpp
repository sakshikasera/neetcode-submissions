class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int, int>>pq;
        vector<int>v;
        for(int i=0 ; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto m: mp){
            pq.push({m.second, m.first});

        }
        int i=0;
        while(i<k){
            auto res= pq.top();
            cout<<res.first<<" "<<res.second;
            v.push_back(res.second);
            pq.pop();
            i++;
        }
        return v;
        
    }
};
