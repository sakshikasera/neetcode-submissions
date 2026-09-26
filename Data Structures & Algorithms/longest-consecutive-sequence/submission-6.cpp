class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 1, count=1;
        map<int, int>mp;
        if(nums.size()<=1)
            return nums.size();
        for(int i=0 ; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto key:mp){
    
            if(mp.find(key.first+1) != mp.end())
                {
                    count++;
                    maxi  = max(count, maxi);
                }
            else{
                count=1;
            }
        }
        return maxi;
    }
};
