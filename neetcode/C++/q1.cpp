//through hashmap


class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
            std::unordered_set<int> x; 

        for (int i : nums) {
            if (x.count(i)>0) {
                return true;
            }
            x.insert(i);
        }
        return false;
    }
};
