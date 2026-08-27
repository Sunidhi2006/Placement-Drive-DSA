class Solution {
public:
    int last_position(vector<int>&nums,int target,int n){
        int lo = 0;
        int hi = n-1;
        int right_most = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(target == nums[mid]){
                right_most = mid;
                lo  = mid+1;
            }
            else if(target < nums[mid]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return right_most;
    }
    int first_position(vector<int>&nums,int target,int n){
        int lo = 0;
        int hi = n-1;
        int left_most = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(target == nums[mid]){
                left_most = mid;
                hi  = mid-1;
            }
            else if(target < nums[mid]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return left_most;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n  = nums.size();

        int first =  first_position(nums,target,n);
        int last  =   last_position(nums,target,n);

        return {first,last};
    }
};