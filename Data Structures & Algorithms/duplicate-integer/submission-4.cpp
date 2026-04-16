class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq_unor_map;
        for(int ele : nums){
            freq_unor_map[ele]++;
        }

        for(auto p : freq_unor_map){
            if(p.second > 1){
                return true;
            }
        }
        return false;
    }
};