class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;

        for(int ele : nums){
            mp[ele]++;
        }

        for(auto p : mp)
        {
            if(p.second > 1){
                return true;
            }
        }
        return false;
    }
};