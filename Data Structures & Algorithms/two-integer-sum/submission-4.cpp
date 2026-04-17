class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++)
        {
            int complementary = target - nums[i];

            if(mp.find(complementary) != mp.end()){
                return {mp.at(complementary),i};
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};
