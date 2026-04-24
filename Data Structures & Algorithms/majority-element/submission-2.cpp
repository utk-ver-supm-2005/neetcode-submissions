class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int req_no_of_times = nums.size()/2 ;

       unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto p : mp){
            if(p.second > req_no_of_times)
                return p.first;
        }
    }
};