class Solution {
public:
    void merge(vector<int>&nums1,int m, vector<int>&nums2,int n){
        for(int j=0,i=m;j<n;j++){
            nums1[i]=nums2[j];
            i++;

        }
        sort(nums1.begin(),nums1.end());
    }
};
/* Merge sort is an efficient, general-purpose, comparison-based sorting algorithm. 
It works by dividing an unsorted list into n sublists, each containing one element (a list of one element is considered sorted), 
and then repeatedly merging sublists to produce new sorted sublists until there is only one sublist remaining, which will be the sorted list1.
The algorithm uses a divide-and-conquer approach to sort the input list. 
It starts by dividing the list into two halves and recursively sorting each half. 
Once the two halves are sorted, they are merged together to form a single sorted list. 
This process is repeated until the entire list is sorted.
Merge sort is known for its efficiency and can sort large lists in O(n log n) time, 
where n is the number of elements in the list. It is also a stable sort, 
which means that the relative order of equal elements is preserved in the sorted list1. */
/* In C++, vector<int>& nums1 means that nums1 is a reference to a vector of integers. 
A vector is a sequence container that stores elements in a dynamically allocated contiguous array, 
which can grow or shrink in size automatically as needed1. The & symbol indicates that nums1 is a reference, 
which means that it refers to the same object as the original vector, rather than creating a new copy of it.
When you pass a vector to a function by reference, any changes made to the vector inside the function will be reflected in the original vector.
This can be useful when you want to modify the contents of the vector or when you want to avoid the overhead of copying the entire vector when passing it to a function.*/

