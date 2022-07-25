class Solution {
public:
    // function to remove duplicates and return the modified array with new size
    int removeDuplicates(vector<int>& nums) {
        
        //  if array is empty or contains single element return this element
        if(nums.size() <= 1)
            return nums.size();
        
        //  Define two variables (i) iterator (j) to store index of next unique element
        int i = 0,j = 0;
        
        //  Loop for traversing elements
        for(;i < nums.size()-1; i++)
            
        // Check if current element is not equal to next one => then store it
            if(nums[i] != nums[i+1])
                nums[j++] = nums[i];
            
            
        // Store last element since, it hasn't stored yet
         nums[j++] = nums[nums.size()-1];
        
        return j;
    }
};