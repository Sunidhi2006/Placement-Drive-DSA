class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n   = nums.size();
        int mid = -1;
        int lo  = 0;
        int hi  = n-1;
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            int missing = nums[mid] - (mid+1);
            if(missing < k){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return lo+k;
    }
};