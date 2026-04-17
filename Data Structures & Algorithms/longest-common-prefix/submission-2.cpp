class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pivot  = strs[0];
        string ans = "";

        for(int i=0; i < pivot.size(); i++)
        {   
            char curr_symbol = strs[0][i];
            bool flag = true;
            for(int j=1; j < strs.size() ; j++)
            {   
                if(curr_symbol != strs[j][i]){
                    flag = false;
                    break;
                }
            }
            if(flag == true)
                ans += curr_symbol;
            else
                return ans;
        }
        return ans;
    }
};