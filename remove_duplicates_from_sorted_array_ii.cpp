class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;  // Index to keep track of where to place the next unique element
        int count = 1;  // Count of occurrences of the current element
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++;  // Increment count for the same element
            } else {
                count = 1;  // Reset count for a new unique element
            }
            
            if (count <= 2) {
                nums[j++] = nums[i];  // Place the element if count is at most 2
            }
        }
        
        return j;  // Return the length of the modified array
    }
};
