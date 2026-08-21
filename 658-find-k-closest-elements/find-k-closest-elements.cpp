class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        bool flag = false;
        int n     = arr.size();
        int lo    = 0;
        int hi    = n-1;
        int idx   = 0;
        int xidx  = 0;

        vector<int>ans(k);
        if(x<arr[0]){
            int i=0;
                while(i<k){
                ans[i] = arr[i];
                i++;
                }
            return ans;
        }

        if(x > arr[n-1]){
            int i = n-1;
            int j = k-1;
                while(j>=0){
                    ans[j] = arr[i];
                    i--;
                    j--;
                }
                return ans;
        }
        while(lo <= hi){
            int mid = (lo+hi) / 2;

            if(arr[mid] == x){
                flag = true;
                xidx = mid;
                break;
            }
            else if(arr[mid] < x){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }

        int lb = hi;
        int ub = lo;
        int lb_difference;
        int ub_difference;
        if(flag==true){
            ans[idx] = arr[xidx];
            idx++;
            lb = xidx-1;     
            ub = xidx+1;
        }
        while(idx<k  &&  lb>=0  &&  ub<=n-1){
            lb_difference = abs(x - arr[lb]);
            ub_difference = abs(x - arr[ub]);

            if(lb_difference <= ub_difference){
                ans[idx] = arr[lb];
                lb--;
            }
            else if(lb_difference > ub_difference){
                ans[idx] = arr[ub];
                ub++;
            }
                idx++;

        }
            
        

        if(lb < 0){
            while(idx < k){
                ans[idx] = arr[ub];
                idx++;
                ub++;
            }
        }

        if(ub > n-1){
            while(idx < k){
                ans[idx] = arr[lb];
                idx++;
                lb--;
            }
        }

        sort(ans.begin(),ans.end());
        return ans; 
        
    }
};