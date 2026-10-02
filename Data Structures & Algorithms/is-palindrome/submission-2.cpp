class Solution {
public:
    bool isPalindrome(string s) {
        int stanga = 0;
        int dreapta = s.size() - 1;

        while (stanga < dreapta) {
            // 1. Sari peste caracterele non-alfanumerice din stânga
            while (stanga < dreapta && !isalnum(s[stanga])) {
                stanga++;
            }
            // 2. Sari peste caracterele non-alfanumerice din dreapta
            while (stanga < dreapta && !isalnum(s[dreapta])) {
                dreapta--;
            }

            // 3. Compară caracterele ignorând diferența literă mare / literă mică
            if (tolower(s[stanga]) != tolower(s[dreapta])) {
                return false;
            }

            // 4. Mergi mai departe spre interior
            stanga++;
            dreapta--;
        }

        return true;
    }
};