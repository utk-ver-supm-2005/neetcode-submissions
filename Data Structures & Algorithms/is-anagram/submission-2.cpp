class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false ;
        }
        else{
            for(int i=0; i<s.length(); i++)
        { 
            int x = 0;

            for(int j=0; j<t.length(); j++)
            {
                if(s[i] == t[j]){
                    t[j] = '*' ;
                    x++;
                    break;
                }
            }
            if(x==0){
                return false;
            }
        }
            return true ;
        }
    }
};
