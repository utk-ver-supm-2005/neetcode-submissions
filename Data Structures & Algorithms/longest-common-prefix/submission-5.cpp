class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i < strs[0].size(); i++)
        {
            char curr_symbol = strs[0][i];
            bool inAll = true;
            for(int j = 1; j < strs.size(); j++)
            {
                if(curr_symbol  != strs[j][i]){
                    inAll = false;
                    break;
                }
            }
            if(inAll) ans += curr_symbol;
            else break;
        }
        return ans;
    }
};