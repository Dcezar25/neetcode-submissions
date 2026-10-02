class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;

        while (start < end) {
            // Adăugăm start < end pentru a nu ieși din limitele memoriei
            while (start < end && !isalnum(s[start])) start++;
            while (start < end && !isalnum(s[end])) end--;

            if (toupper(s[start]) != toupper(s[end])) return false;

            start++;
            end--;
        }

        return true;
    }
};