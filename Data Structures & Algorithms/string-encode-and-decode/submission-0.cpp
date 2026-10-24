class Solution {
public:
    //Var 1: dau cut la stringuri si apoi dau cut iar inapoi
    //Var 2: folosesc hash map
    string encode(vector<string>& strs) {
        string codat = "";
        for (const string& s : strs) {
            codat += to_string(s.size()) + '#' + s;
        }
        return codat;
    }

    vector<string> decode(string s) {
        vector<string> deReturnat;
        int i = 0;
        int n = s.size();

        while (i < n) {
            // Căutăm poziția separatorului '#'
            int j = i;
            while (j < n && s[j] != '#') {
                j++;
            }

            // Aflăm lungimea șirului curent
            int lungime = stoi(s.substr(i, j - i));

            // Trecem peste caracterul '#'
            i = j + 1;

            // Extragem șirul de dimensiunea specificată
            deReturnat.push_back(s.substr(i, lungime));

            // Poziționăm indexul la începutul următorului pachet
            i += lungime;
        }

        return deReturnat;
    }
};
