/* CASE 27: REMOVE ALL INSTANCES IN AN ARRAY */

#include <vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // modify the array itself for pass-by-reference
        // SPECIAL CASE (empty array)
        if (nums.size() < 1) {
            return 0;
        }      
        else {
            size_t k = 0; // # of elements when val is removed
            for (size_t i = 0; i < nums.size(); ++i) {
                if (nums[i] != val) { // ensures the target value is never stored in the first k elements
                    nums[k] = nums[i];
                    ++k;
                }
            }
            return k;
        }
    }
};
