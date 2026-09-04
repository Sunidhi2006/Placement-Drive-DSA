class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int m = spells.size();
        int n = potions.size();
        sort(potions.begin(),potions.end());
        vector<int>ans;
        int count = 0;
        int i = 0;
        while(i<m){
        long long min_potion = ceil((1.0*success)/spells[i]);
        int lower_bound = n;
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(potions[mid] >= min_potion ){
                lower_bound = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        } 
        count = n-lower_bound;
        ans.push_back(count);
        i++;
        }
        return ans;
    }
};