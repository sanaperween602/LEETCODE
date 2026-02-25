class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int left = 0;       // for 0
        int temp = 0;       // current pointer (mid)
        int right = n - 1;   // for 2
        while(temp<=right)
        {
            if(nums[temp]==0)
            {
                swap(nums[left],nums[temp]);
                left++;
                temp++;
            }
            else if(nums[temp]==1)
            {
                temp++;
            }
            else 
            {
                swap(nums[temp],nums[right]);
                right--;
            }
        }
        
        
    }
};