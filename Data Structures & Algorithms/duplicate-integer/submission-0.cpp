class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashtable(nums.begin(), nums.end());
        return hashtable.size() < nums.size();
    }
};