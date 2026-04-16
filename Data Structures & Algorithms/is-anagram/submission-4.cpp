class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        for(char ele : s){
            mp1[ele]++;
        }

        unordered_map<char, int> mp2;
        for(char ele : t){
            mp2[ele]++;
        }

        if(mp1.size() != mp2.size())
            return false;
        else{
            for(auto p : mp1){
                if(mp2.find(p.first) == mp2.end() || p.second != mp2.at(p.first)){
                    return false;
                }
            }
        }
        return true;
    }
};
