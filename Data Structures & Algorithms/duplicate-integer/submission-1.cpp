class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        seen.reserve(nums.size()); // Previne re-alocările repetate de memorie

        for (int n : nums) {
            // .insert() returnează un pair<iterator, bool>.
            // .second este 'false' dacă elementul exista deja în set.
            if (!seen.insert(n).second) {
                return true; // Oprit imediat la primul duplicat găsit
            }
        }
        return false;
    }
};