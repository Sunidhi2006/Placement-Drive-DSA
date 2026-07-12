class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
  int max = 0;
  int count = 1;
  int target = n/2;
  int ans =-1;
  sort(nums.begin(),nums.end());
  if(n == 1)
    return nums[0];
      for(int i=0;i<n-1;i++){
        if(nums[i] == nums[i+1]){
              count++;
              if(i==(n-2)){
                  if(count>target && count>max){
                    max=count;
                    ans=nums[i];
                      break;
                  }                
              }

        }
        else{
            if(count>target && count>max){
                    max=count;
                    ans=nums[i];
            }
                      count = 1;
        }
      }
      return ans;
    }
};