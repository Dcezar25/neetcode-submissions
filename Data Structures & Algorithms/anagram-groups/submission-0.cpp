class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0 || strs.size() == 0){
            vector<vector<string>> s = {strs};
            return s;
        }
        unordered_multimap<string, string> cheie;
        for (auto s: strs){
            string sortat_s = s;
            sort(sortat_s.begin(),sortat_s.end());
            cheie.insert({sortat_s,s});
        }
        vector<vector<string>> v;
        for(auto it = cheie.begin(); it != cheie.end();){
            auto [start, end] = cheie.equal_range(it->first);

            vector<string> grup;
            for (auto sub_it = start; sub_it != end; ++sub_it) {
                grup.push_back(sub_it->second);
            }

            v.push_back(move(grup));
            it = end;
        }

        return v;
    }
};
