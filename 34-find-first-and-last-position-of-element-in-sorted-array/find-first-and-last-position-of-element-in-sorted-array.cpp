class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int low   = 0;
    int high  = nums.size()-1;
    bool first_flag = false;

    vector<int>v;

    while(low <= high){
        int mid = (low+high) / 2;
        if(nums[mid] == target){
            if(mid == 0 || nums[mid-1] != target){
                v.push_back(mid);
                first_flag = true;
                break;
            }
            else if(nums[mid-1] == target){
                high = mid-1;
            }

        }
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    low   = 0;
    high  = nums.size()-1;
    bool second_flag=false;

    while(low <= high){
        int mid = (low+high) / 2;
        if(nums[mid] == target){
            if(mid == nums.size()-1 || nums[mid+1] != target){
                v.push_back(mid);
                second_flag = true;
                break;
            }
            else if(nums[mid+1] == target){
                low = mid+1;
            }

        }
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    if(second_flag  && first_flag ) {
        return v;
    }
    else{
        return {-1,-1};
    } 
    }
};