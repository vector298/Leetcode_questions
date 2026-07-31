class Solution {
public:

   
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<char> slol;
        vector<char> tlol;

        for(int i=0;i<s.length();i++){
            slol.push_back(s[i]);
        }
        for(int i=0;i<t.length();i++){
            tlol.push_back(t[i]);
        }
        sort(slol.begin(),slol.end());
        sort(tlol.begin(),tlol.end());

        if(slol!=tlol) return false;


        return true;


        
    }
};