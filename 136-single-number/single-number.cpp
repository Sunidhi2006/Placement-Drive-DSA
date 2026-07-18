class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k = 1;
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int target = nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2){
            if(nums[i] == nums[k]){
                k+=2;
            }
            else{
            target  = nums[i];               
            }
        }
        return target;
    }
};