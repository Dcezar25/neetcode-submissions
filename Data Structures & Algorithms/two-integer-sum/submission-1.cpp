class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> set1(nums.size());
        int i = 0;
        vector<int> numere;
        for(auto x : nums){
            if(set1.count(target-x) > 0){
                numere.push_back(set1[target-x]);
                break;
            }
            else {set1.insert({x,i}); i++;}
        }
        numere.push_back(i++);
        return numere;
    }
};
