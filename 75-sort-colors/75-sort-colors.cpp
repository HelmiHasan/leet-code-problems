class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        // int tmp =0
        while(mid <= high){
            if(nums[mid] == 0){
                //Swap low & mid // swap(nums[mid++],nums[low++]);
                //Without swap()
                // tmp = nums[low];
                // nums[low] = nums[mid];
                // nums[mid] = tmp;
                // mid++;
                // low++;
                ////////////
                nums[mid] = nums[low];
                nums[low] = 0;
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                //Swap high & mid // swap(nums[high--],nums[mid]);
                 //Without swap()
                // tmp = nums[high];
                // nums[high] = nums[mid];
                // nums[mid] = tmp;
                // high--;
                ////////////
                nums[mid] = nums[high];
                nums[high] = 2;
                high--;
            }
                
        }
    }
};