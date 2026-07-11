class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //pivot index
        int pivot_idx = -1;
        for(int i=(n-1);i>0;i--){
            if(nums[i] > nums[i-1]){
                pivot_idx = i-1;
                break;
            }
        }

        //greatest element
        int greatest_idx = -1;
        if(pivot_idx != -1){
            for(int i = (n-1) ;i >= (pivot_idx+1); i--){
                if(nums[pivot_idx]<nums[i]){
                    greatest_idx = i;
                    break;
                }
            }
            //swapping
            swap(nums[pivot_idx],nums[greatest_idx]);
            //reverse
            reverse(nums.begin()+(pivot_idx+1),nums.end());
            return;
        }

        reverse(nums.begin(),nums.end());   

    }
};