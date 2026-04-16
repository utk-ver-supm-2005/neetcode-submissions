class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++)
        {
            int curr_ele = nums[i];
            for(int j=i+1; j<n; j++){
                if(curr_ele == nums[j])
                    return true;
            }
        }
        return false;
    }
};