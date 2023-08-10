class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n;
        reverse(nums.begin(), nums.end());               
        reverse(nums.begin(), nums.begin() + k);         
        reverse(nums.begin() + k, nums.end());
        
    }
};
/*reverse() Function:

The reverse() function is part of the C++ Standard Library and is used to reverse the order of elements in a container.
It takes two iterators as arguments: the beginning and ending iterators of the range to be reversed.
In this code, reverse(nums.begin(), nums.end()) reverses the entire array.
begin() and end() Member Functions:

nums.begin() returns an iterator pointing to the first element of the nums vector.
nums.end() returns an iterator pointing just past the last element of the nums vector.
k % n:

This line ensures that the value of k is within the range of the array size n.
For example, if the array size is 7 and k is 10, k % n will make k equal to 3, which is the effective number of rotations needed.*/
