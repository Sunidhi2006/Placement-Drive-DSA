class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>result;

        sort(nums.begin(),nums.end());

        for(int i=0;i<=n-4;i++){

          if(i>0 && nums[i] == nums[i-1]){
                    continue;
          }
            for(int j=i+1;j<=n-3;j++){
                int l = j+1;
                int k = n-1;
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
              while(l<k){ 
                  long long sum = nums[i];
                  sum += nums[j];
                  sum += nums[k];
                  sum += nums[l];
                  
                  if(sum == target){
                    result.push_back({nums[i],nums[j],nums[k],nums[l]});
                        l++;
                        k--;

                        while(l<k && nums[l] == nums[l-1]){
                            l++;
                        }
                        while(l<k && nums[k] == nums[k+1]){
                            k--;
                        }                   
                  }

                    else if(sum<target){
                        l++;
                    }

                    else{
                        k--;
                    }
                }
            }
        }
            
        return result;
    }
};