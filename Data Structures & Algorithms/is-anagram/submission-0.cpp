class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        unordered_multiset<char> string1(s.begin(), s.end());
        
        unordered_multiset<char> string2(t.begin(), t.end());
    
    return string1 == string2;
    }
};
