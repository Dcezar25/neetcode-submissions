class Solution {
public:
    int maxArea(vector<int>& heights) {
        auto sfarsit = heights.end() - 1;
        auto inceput = heights.begin();
        int max = 0;
        int i = heights.size() - 1;
        while (inceput != sfarsit) {
            if(*sfarsit > *inceput) {
                if (max < (*inceput) * i) {
                    max = (*inceput) * i;
                }
                i--;
                inceput++;
            } else {
                if (max < (*sfarsit) * i) {
                    max = (*sfarsit) * i;
                    }
                i--;
                sfarsit--;
            }
        }
        return max;
    }
};
