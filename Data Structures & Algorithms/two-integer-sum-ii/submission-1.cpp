class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0;
        int end = numbers.size() - 1;
        vector<int> vect;
        while (begin != end) {
            if ((numbers[begin]+numbers[end]) == target){
                break;
            }else if((numbers[begin]+numbers[end]) > target){
                end--;
            }else begin++;
        }
        vect.push_back(++begin);
        vect.push_back(++end);
        return vect;
    }
};
