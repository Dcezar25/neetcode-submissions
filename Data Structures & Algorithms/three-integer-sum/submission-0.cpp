class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> deReturnat;

        if (n < 3) return deReturnat;

        // 1. Sortam vectorul pentru a putea folosi two pointers
        sort(nums.begin(), nums.end());

        // 2. Parcurgem primul element pana la n - 2
        for (int i = 0; i < n - 2; i++) {
            // Daca cel mai mic numar este pozitiv, suma a 3 numere nu mai poate fi 0
            if (nums[i] > 0) break;

            // Sarim peste duplicatele pentru primul element
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = n - 1;

            // 3. Two pointers: j merge la dreapta, k la stanga
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum > 0) {
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    deReturnat.push_back({nums[i], nums[j], nums[k]});

                    // Sarim peste duplicatele pentru al doilea si al treilea element
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;

                    j++;
                    k--;
                }
            }
        }

        return deReturnat;
    }
};
