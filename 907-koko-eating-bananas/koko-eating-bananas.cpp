class Solution {
public:
    bool Possible(vector<int>&piles,int h,int mid){
        int sum = 0;
        for(int i=0;i<piles.size();i++){
            sum += piles[i]/mid;

            if ((piles[i]%mid)!=0){
                sum++;
            }
        }

        if(sum <= h){
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int lo = 1;
        int hi = *max_element(piles.begin(),piles.end());
        while(lo < hi){
            int mid = lo+(hi-lo)/2;
            if(Possible(piles,h,mid)){
                hi = mid;
            }
            else{
                lo = mid+1;
            }
        }
        return lo;
    }
};