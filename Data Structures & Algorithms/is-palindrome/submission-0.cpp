class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() <= 1)
            return true;

        auto stanga = s.begin();
        auto dreapta = s.end() - 1; // 1. s.end() - 1 pentru a fi pe ultimul caracter

        // 2. Sari peste caracterele non-alfanumerice de la început
        while (stanga < dreapta && !isalnum(*stanga)) {
            stanga++;
        }
        // 3. Sari peste caracterele non-alfanumerice de la sfârșit
        while (stanga < dreapta && !isalnum(*dreapta)) {
            dreapta--;
        }

        // 4. Folosim < în loc de != pentru siguranță
        while (stanga < dreapta) {
            // 5. Comparăm folosind tolower()
            if (tolower(*stanga) == tolower(*dreapta)) {

                // Mergem cu un pas spre interior din dreapta și căutăm următorul caracter valid
                dreapta--;
                while (stanga < dreapta && !isalnum(*dreapta)) {
                    dreapta--;
                }

                // Mergem cu un pas spre interior din stânga și căutăm următorul caracter valid
                stanga++;
                while (stanga < dreapta && !isalnum(*stanga)) {
                    stanga++;
                }

            } else {
                return false;
            }
        }
        return true;
    }
};