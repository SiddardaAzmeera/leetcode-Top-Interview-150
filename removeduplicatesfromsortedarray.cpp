class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for (int i = 0 ; i<nums.size();i++){
            if(nums[i]!=nums[j-1]){
                nums[j]=nums[i];
                j++;
            }

        }
        return j; 
    }
};

/* This loop is responsible for iterating through the input array nums and removing duplicates while maintaining the order of unique elements. 
Here's a step-by-step explanation of what's happening inside the loop: for (int i = 1; i < nums.size(); i++) 
{: This loop iterates over the array starting from index 1 (because the first element is already considered unique).
if (nums[i] != nums[k - 1]) {: Inside the loop, this condition checks whether the current element nums[i] is not equal to the last unique element found, 
which is at index k - 1. This comparison determines whether the current element is a new unique element or a duplicate.
If the condition in the if statement is true, it means that nums[i] is a new unique element that hasn't been encountered before.
Inside the if block:
a. nums[k] = nums[i];: Copy the value of the new unique element nums[i] to the position indicated by the pointer k in the array nums. This effectively overwrites any duplicates with the new unique element.
b. k++;: Increment the value of the pointer k. This indicates that a new unique element has been placed at the position k in the array and updates the pointer to the next available position to write the next unique element.
The loop continues to iterate through the array, and the process repeats for each element.
After the loop completes, the value of k represents the number of unique elements found in the array.*/
