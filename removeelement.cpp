class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i =0; i < nums.size();i ++){
            if (nums[i]!= val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
        
    }
};
/*int removeElement(vector<int>& nums, int val): This is the function definition. 
It takes a reference to a vector of integers nums and an integer val as input. 
It returns an integer representing the new size of the modified array after removing occurrences of val.
int k = 0;: Initialize a variable k to keep track of the current position to write in the modified array. 
It will represent the length of the new array where elements are not equal to val.
for (int i = 0; i < nums.size(); i++) {: Iterate through each element of the original nums array using a loop.
Inside the loop:
a. if (nums[i] != val) {--- Check if the current element nums[i] is not equal to the target value val.
b. Inside the if block:
nums[k] = nums[i];---If the current element is not equal to val, copy the element to the position indicated by k in the array. 
This effectively shifts the elements not equal to val to the front of the array.
k++;--- Increment the value of k to move the pointer forward, indicating that a new element has been successfully placed in the modified array.
After the loop completes, the value of k represents the new size of the modified array where all occurrences of val have been removed and only the elements not equal to val remain.
return k;---Return the value of k as the new size of the modified array. This indicates the number of elements in the modified array that are not equal to val. */
