class Solution {
public:
    //O sa folosesc un set pentru ca le ordoneaza singur, dar daca as folosi un unordered_set si as face eu la final ordinea ar fi mai rapid? 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == nums.size()){
            return nums;
        }
        unordered_map<int, int> myset;
        for(auto i : nums){
            myset[i]++;
        }
        multimap<int, int> ordonat;
        for (auto& [numar, frecv] : myset) {
            ordonat.insert({frecv, numar});
        }
        auto elemCurent = ordonat.rbegin();
        vector<int> final;
        for(auto i = 0; i < k; i++){
            final.push_back(elemCurent->second);
            elemCurent++;
        }
        return final;
    }
};
