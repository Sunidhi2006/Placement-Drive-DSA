class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;

        bool isEven;
        while(lo < hi){
            int mid = lo + (hi-lo)/2;
            if((hi-mid) %2 == 0){
                isEven = true;
            }
            else{
                isEven = false;
            }

            if(nums[mid] == nums[mid+1]){
                if(isEven){
                    lo = mid+2;
                }
                else{
                    hi = mid-1;
                }
            }

            else{
                if(isEven){
                    hi = mid;
                }
                else{
                    lo = mid+1;
                }
            }
        }
        return nums[hi];
    }
};